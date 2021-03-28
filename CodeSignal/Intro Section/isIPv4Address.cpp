#include<iostream>
#include<stack>
#include<sstream>
#include<string>

using namespace std;

bool isIPv4Address(string inputString) {
    int count = 0, index = 0;
    stack<string> s;
    stack<int> in;
    in.push(-1);
    string a = "";
    bool result = true;
    for(int i =0; i < inputString.length()+1;i++)
    {
        index = in.top()+1;
        if(inputString[i] > 57)
        {
            result = false;
        }
        if(inputString[i] == '.')
        {
            in.push(i);
            count++;
            for(int j = index; j<=in.top() ; j++)
            {
                a.push_back(inputString[j]);
            }
            if(a[a.size()-1]=='.')
            {
                a.pop_back();
            }
            cout << "string on iteration : " << a << endl;
            s.push(a);
            a.clear();

        }
        else if(i == inputString.length()-1)
        {
            in.push(i);
            for(int j = index; j<=in.top() ; j++)
            {
                a.push_back(inputString[j]);
            }
            cout << "string on iteration : " << a << endl;
            s.push(a);
            a.clear();

        }
        else
        {
            continue;
        }
    }

    if(count > 3)
    {
        result = false;
    }

    string check = "";
    int x = 0;
    while(s.size())
    {
        check = s.top();
        if(check.size()>=2 && check.front() == '0')
        {
            result = false;
        }
        stringstream geek(check);
        geek >> x;

        s.pop();

        if(x >= 255)
        {
            result = false;
        }
    }
    return result;
}

int main()
{
    string a = "172.16.254.1";
    bool check = isIPv4Address(a);
    cout << check;
    return 0;
}