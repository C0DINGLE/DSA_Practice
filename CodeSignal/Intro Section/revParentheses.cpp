#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

string reverseInParentheses(string inputString)
{
    string rev;
    bool nested = true;
    //int first = inputString.rfind("(");
    int i = 0, first, second = 0;
    while (i <= inputString.length())
    {
        if (inputString[i] == '(' && i == inputString.find_first_of(('(')))
        {
            first = i;
            i++;
        }
        else if (inputString[i] == ')' && !(second))
        {
            nested = false;
            reverse(inputString.begin() + first+1, inputString.begin() + i);
            i++;
        }
        else if ((inputString[i] == '(') && (i > inputString.find_first_of(('('))))
        {
            second = i;
            i++;
        }
        else if (inputString[i] == ')' && i == inputString.find_first_of((')')))
        {
            reverse(inputString.begin() + second + 1, inputString.begin() + i);
            i++;
            //cout << "i: " << i << endl;
        }
        else if (inputString[i] == ')' && i > inputString.find_first_of((')')))
        {
            if(nested)
            {
                reverse(inputString.begin() + first + 1, inputString.begin() + i);
                i++;
            }
            else
            {
                reverse(inputString.begin() + second + 1, inputString.begin() + i );
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    for (int k = 0; k < inputString.length(); k++)
    {
        if (inputString[k] != '(' && inputString[k] != ')')
        {
            rev.push_back(inputString[k]);
        }
    }

    return rev;
}
int main()
{
    string inputS, check, paren;
    inputS = "one (ruof ((rht)ee) owt)";
    cout << reverseInParentheses(inputS);
    return 0;
}