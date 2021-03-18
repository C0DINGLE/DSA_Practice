#include <iostream>
#include <vector>

using namespace std;

bool almostIncreasingSequence(vector<int> sequence) {
    int count = 0,  digit = 0;
        
    for(int i = 0; i<(sequence.size()-1); i++)
    {
        if(sequence[i] >= sequence [i+1])
        {
            count++;
            //digit = sequence[i];
            if(sequence[i] >= sequence [i+2] && sequence[i-1] >= sequence[i+1] && sequence[i-1] && i+2 < sequence.size())
            {
                count++;
            }
        }
    }
    if(count > 1)
        return false;
    else 
        return true;
}

int main()
{
    int q;
    vector<int> inputA;
    inputA.push_back(3);
    inputA.push_back(5);
    inputA.push_back(67);
    inputA.push_back(98);
    inputA.push_back(3);
    almostIncreasingSequence(inputA);
    return 0;
}