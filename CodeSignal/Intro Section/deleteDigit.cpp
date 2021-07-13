#include <sstream>
int deleteDigit(int n) {
    vector<int> a;
    string s;
    string na;
    int k = n;
    while(k)
    {
        a.push_back((k%10));
        s += (to_string(k%10));
        k /= 10;
    }    
    int count = 0;
    reverse(s.begin(), s.end());
    int max = s[s.length()-2] - '0';
    int i = 0;
    if(s[s.length()-1] - '0' == 0 && max > s.find_first_of("123456789") && s.length()>2)
    {
        sort(a.begin(), a.end());
        
       while((a[i] - '0') == 0)
       {
           i++;
       }
       i++;
       a[0] = a[i];
    }
    else
        sort(a.begin(),a.end());
    
    for(int i = 0; i<s.length(); i++)
    {
        if((s[i] - '0') != a[0])
        {
            na.push_back(s[i]);
        }
        else if ((s[i] -'0') == a[0])
        {
            if(count)
            {
                na.push_back(s[i]);
            }
            else 
            {
                count++;
                continue;
            }
        }
    }
    stringstream geek(na);
    int x = 0;
    geek >> x;    
    return x;
}
