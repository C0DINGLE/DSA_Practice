#include <iostream>
#include <vector>

using namespace std;
void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++)
    {
        std::cout << input.at(i) << ' ';
    }
}

int makeArrayConsecutive2(vector<int> statues)
{
    int temp = 0, count = 0;
    int i, j, min;
    for (int i = 0; i < statues.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < statues.size(); j++)
            if (statues[j] < statues[min])
                min = j;
        temp = statues[i];
        statues[i] = statues[i + 1];
        statues[i + 1] = temp;
    }
    
    print(statues);

    for (int i = 0; i < (statues.size() - 1); i++)
    {
        if ((statues[i + 1] - statues[i]) != 1)
        {
            cout << "\n"
                 << statues[i + 1] << " - " << statues[i] << endl;
            count += statues[i + 1] - statues[i] - 1;
        }
    }
    return count;
}

int main()
{
    int q;
    vector<int> inputA;
    inputA.push_back(8);
    inputA.push_back(2);
    inputA.push_back(1);
    inputA.push_back(5);
    inputA.push_back(7);
    print(inputA);
    cout << "\n";

    q = makeArrayConsecutive2(inputA);
    //print(inputA);
    cout << q;
}
