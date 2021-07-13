#include<iostream>
using namespace std;

int depositProfit(int deposit, int rate, int threshold) {
    int duration = 0;
    while(deposit < threshold)
    {
        deposit = deposit + (int)(rate*deposit*0.01);
        duration++;
    }
    cout << duration << endl;
    return duration;
}
int main()
{
    int k = depositProfit(100, 100, 170);
    cout << k << endl;
    return 0;
}