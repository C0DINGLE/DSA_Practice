#include<sstream>
#include<iostream>
#include<vector>
#include<string>
using namespace std;


int solve(vector<int> arr, int x)
{
    vector<string> k;
    string s;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(arr[i]*arr[j] == x)
            {
                s = s + to_string(arr[i]) + to_string(arr[j]);
            }
        }
        k.push_back(s);
        s.clear();
    }
    int smallest = 600;
    for(int i = 0; i < k.size(); i++)
    {
        stringstream geek(k[i]);
        int y = 0;
        geek >> y;
        if(y < smallest)
        {
            smallest = y;
        }
    }
    return smallest;
}
int factorise(int a)
{
    int temp = 2;
    vector<int> arr;
    while(temp < a)
    {
        if(a%temp == 0)
            arr.push_back(a%temp);
        else
            continue;
            
        temp++;
    }
    return solve(arr,a);
}

int digitsProduct(int product) {
    int primes[] = {1,3,5,7,9,5,11,13,17,19,23,29,31,37,41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    if(find(begin(primes), end(primes), product) != end(primes))
    {
        return -1;
    }
    else
    {
        return factorise(product);
    }
}
int main()
{
    int number = 12;
    cout << (digitsProduct(number)) << endl;
    return 0;

}
