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
vector<int> sortByHeight(vector<int> a)
{
    vector<int> b;
    b.push_back(0);
    int temp, k = 0, min = 1000;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 0)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
            if (k == 0)
            {
                b[k] = a[i];
                k += 1;
            }
            else
            {
                b.push_back(a[i]);
            }
        }
    }


    for (int j = 0; j < b.size() - 1; j++)
    {

        if (b[j] > b[j + 1])
        {
            int temp = b[j];
            b[j] = b[j + 1];
            b[j + 1] = temp;
            j = -1;
        }
    }
    print(b);
    return b;
}



int main()
{
    vector<int> c;
    vector<int> d;
    c.push_back(-1);
    c.push_back(150);
    c.push_back(190);
    c.push_back(170);
    c.push_back(-1);
    c.push_back(-1);
    c.push_back(160);
    c.push_back(180);
    d = sortByHeight(c);
    //cout << d;

    return 0;
}