#include <iostream>
#include <string>

using namespace std;

//Solution Function
bool checkPalindrome(string inputString) {
    string arr = "";
    int index = 0, k=0;
    for(int i = inputString.length(); i >= 0; i--)
    {
        arr += inputString[i];
        //index++;
    }
    cout << "Original: " << inputString;
    cout << "\nReversed string: " << arr << endl;
    if(inputString.length() == 1)
    {
        return true;
    }
    else
    {
        for(int i = 1; i <= inputString.length(); i++)
        {
            if(arr[i] != inputString[k])
            {
                cout << "\n rev  " << arr[i] << "\n input  " <<inputString[k] << endl;
                return false;
            }
            k++;
        }
        return true;
    }
}

int main()
{
    bool check =  checkPalindrome("abbca");
    if(check)
    {
        cout << "\nTrue";
    }
    else
    {
        cout << "\nFalse";
    }

    return 0;
}
