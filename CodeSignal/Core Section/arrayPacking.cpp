#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int arrayPacking(vector<int> a) {
    string n, k ="";
    int num = 0;
    for(int i = 0; i<a.size(); i++)
    {
        while(a[i])
        {
            n += to_string(a[i]%2);
            a[i] = a[i]/2;
        }
        while(n.length() != 8)
        {
            n.append("0");
        }
        k += n;
        n.clear();
    }
    for(int j = 0; j < k.length(); j++)
    {
        num += ((k[j]-'0') * (pow(2,j)));
    }
    return num;
}

int main()
{
    vector <int> a;
    a.push_back(24);
    a.push_back(85);
    a.push_back(0);
    int k = arrayPacking(a);
    cout << "\n" << k;
    return 0;
}
