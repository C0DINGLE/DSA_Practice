#include<iostream>
#include<vector>

using namespace std;

int absoluteValuesSumMinimization(vector<int> a) {
    vector<int> x;
    int sum1 = 0;
    for(int i = 0; i < a.size() ; i++)
    {
        for(int j = 0; j < a.size() ; j++)
        {
            sum1 += abs(a[i] - a[j]);
            x.push_back(sum1);
        }
        sum1 = 0;
    }
    int index = 0;
    sum1 = x[0];
    for(int i = 0; i<x.size(); i++)
    {
        if(x[i] < sum1)
        {
            sum1 = x[i];
            index = i;
        }
    }
    return a[index];
}
int main()
{
    vector <int> test;
    test.push_back(2);
    test.push_back(4);
    test.push_back(7);
    int k = absoluteValuesSumMinimization(test);
    cout << k;
    return 0;
}