#include <iostream>
#include <math.h>
using namespace std;
bool isLucky(int n) {
    int digits = 0,  half = 0;
    int temp, s1, s2,sum1 = 0, sum2 =0;
    temp = n;
    while(temp!=0)
    {
        temp = temp/10;
        digits++;
    }
    cout << "digits"  <<digits << endl;
    half = (pow(10,(digits/2)));
    cout << "half"  <<half << endl;
    cout << "n " <<n << endl;
    s2 = (n)%half;
    s1 = (n)/half;
    cout << "s2 " <<s2 << endl;
    cout << "s1 "  <<s1 << endl;
    for(int i = 0; i<(digits/2); i++)
    {
        sum1 += (s1%10);
        s1 = s1/10;
    }
    for(int i = (digits/2); i<digits; i++)
    {
        sum2 += (s2%10);
        s2 = s2/10;
    }
    cout << sum1 << endl;
    cout << sum2 << endl;
    if(sum1 == sum2)
        return true;
    else
        return false;
}

int main()
{
    bool b = isLucky(239017);
    cout << "\n Result: " << b;
    return 0;
}
