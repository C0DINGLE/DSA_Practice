#include <unordered_map>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

bool palindromeRearranging(string inputString)
{
    int l = inputString.length(), count = 0;
    int freq[50] = {0};
    int i = 0;
    bool result;

    for (int i = 0; i < l - 1; i++)
    {
        freq[inputString[i]]++;
    }
    for (i = 0; i < 50; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Character " << (char)i << " occurs " << freq[i] << " time in the string\n";
        }
    }
    return 0;
}

int main()
{
    string a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc";
    bool check = palindromeRearranging(a);
    cout << check << endl;
    return 0;
}
