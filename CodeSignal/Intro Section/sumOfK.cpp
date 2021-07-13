int sumOfK(int index, vector<int> input, int cons)
{
    int sum = 0;
    while(cons > 0)
    {
        sum += input[index++];
        cons--;
    }
    return sum;
}

int arrayMaxConsecutiveSum(vector<int> inputArray, int k) {
    int sum = 0;
    for(int i =0; i<inputArray.size()-(k-1); i++)
    {
        if(sumOfK(i, inputArray, k) > sum)
        {
            sum = sumOfK(i, inputArray, k);
        }
    }
    return sum;
}
