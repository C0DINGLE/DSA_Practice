#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool stringsRearrangement(vector<string> inputArray)
{
    vector<int> outputArray;
    int count = 0, index =0 ;
    bool result = true;
    int diff = 0;
    int sum = 0;
    for (int i = 0; i < inputArray.size(); i++)
    {
        for (int j = 0; j < inputArray[i].length(); j++)
        {
            sum += inputArray[i][j];
        }
        outputArray.push_back(sum);
        sum = 0;
    }
    for (int i = 0; i < outputArray.size(); i++)
    {
        for (int j = i; j < outputArray.size(); j++)
        {
            if (outputArray[i] > outputArray[j])
            {
                swap(outputArray[i], outputArray[j]);
                swap(inputArray[i], inputArray[j]);
            }
        }
    }
    for (int i = 0; i < outputArray.size(); i++)
    {
        cout << outputArray[i] << endl;
    }
    for (int i = 0; i < inputArray.size(); i++)
    {
        cout << inputArray[i] << endl;
    }

    for (int i = 0; i < outputArray.size() - 1; i++)
    {
        if ((outputArray[i] == outputArray[i+1]))
            {
                result = false;
            }
        for (int j = 0; j < inputArray[0].size() - 1; j++)
        {
            if ((inputArray[i][j] != inputArray[i + 1][j]) && (count <= 1))
            {
                cout << inputArray[i][j] << "  " << inputArray[i + 1][j] << endl;
                count++;
            }
            if (count > 1)
            {
                result = false;
            }
        }
        count = 0;
        index = 0;
    }
    return result;
}

int main()
{
    vector<string> Arr;
    Arr.push_back("abc");
    Arr.push_back("abx");
    Arr.push_back("axx");
    Arr.push_back("abc");
    bool k = stringsRearrangement(Arr);
    cout << "\n"
         << k;
    return 0;
}