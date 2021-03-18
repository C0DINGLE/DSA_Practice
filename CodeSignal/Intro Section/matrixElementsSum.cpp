#include <iostream>
#include <vector>

using namespace std;

int matrixElementsSum(vector<vector<int> > matrix)
{
    int sum = 0, count = 0;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                while (i < matrix.size())
                {
                    matrix[i++][j] = 0;
                    count++;
                }
                i = i - count;
                count = 0;
            }
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    return sum;
}

int main()
{
    int q;
    std::vector<std::vector<int> > matrix;
    vector<int > row1;
    vector<int > row2;
    vector<int > row3;
    row1.push_back(0);
    row1.push_back(1);
    row1.push_back(1);
    row1.push_back(2);

    row2.push_back(0);
    row2.push_back(5);
    row2.push_back(0);
    row2.push_back(0);

    row3.push_back(2);
    row3.push_back(0);
    row3.push_back(3);
    row3.push_back(3);

    matrix.push_back(row1);
    matrix.push_back(row2);
    matrix.push_back(row3);
    
    q = matrixElementsSum(matrix);
    cout << "Result" << q;
}
