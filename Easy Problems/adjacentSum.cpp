#include <iostream>
#include <vector>

using namespace std;

int adjacentElementsProduct(vector<int> inputArray) {
    int p = -253;
    for (int i = 0; i < (inputArray.size()-1); i++)
    {
       cout << inputArray[i]*inputArray[i+1] << endl;
       if(inputArray[i]*inputArray[i+1] > p)
       {
           p = inputArray[i]*inputArray[i+1];
       }
    }
    return p;
}

int main()
{
    int q;
    vector<int> inputA;
    inputA.push_back(-23);
    inputA.push_back(4);
    inputA.push_back(-3);
    inputA.push_back(8);
    inputA.push_back(-12);
    q = adjacentElementsProduct(inputA);
    return 0;
}