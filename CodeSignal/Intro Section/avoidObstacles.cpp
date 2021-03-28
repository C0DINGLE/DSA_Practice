#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    vector<int> inputArray;
    vector<int> s;
    bool chk = false;
    // inputArray.push_back(2);
    // inputArray.push_back(3);
    inputArray.push_back(1);
    inputArray.push_back(4);
    inputArray.push_back(10);
    inputArray.push_back(6);
    inputArray.push_back(2);
    int temp = 0;
    for (int i = 0; i < inputArray.size() - 1; i++)
    {
        for (int j = i + 1; j < inputArray.size(); j++)
        {
            if (inputArray[i] > inputArray[j])
            {
                temp = inputArray[i];
                inputArray[i] = inputArray[j];
                inputArray[j] = temp;
            }
          
        }
    }
    
    int max = inputArray.back(), answer = 0;
    for (int i = 1; i < max; i++)
    {
        for (int j = 0; j < inputArray.size(); j++)
        {
            if (inputArray[j] % i == 0)
            {
                chk = true;
                break;
            }
            if (j == inputArray.size() - 1 && !chk)
            {
                s.push_back(i);
            }
        }
        chk = false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << endl
             << s[i];
    }
    if (s.size() == 0)
    {
        answer = inputArray.back() + 1;
    }

    return answer;
}