#include <iostream>
using namespace std;
int phoneCall(int min1, int min2_10, int min11, int s) {
    int mins = 0;
    if(s-min1 >= 0)
    {
        s = s - min1;
        mins++;
        while(mins < 10 && s >= min2_10)
        {
            s = s - min2_10;
            mins++;
        }
        if(mins >= 10)
        {
            mins = mins + (s/min11);
        }
        return mins;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    //Test Case
    phoneCall(1,2,1,6);
    return 0;
}
