int answer(int a)
{
    int ans = 0,index=0 , count = 0 ,i = 0;
    while(true)
    {
        if(!(a & 1))
        {
            if(!count)
                count++;
            else if(count)
            {
                break;
            }
        }
        a = (a >> 1);
        //i++;
        index++;
    }
    ans = pow(2,index);
    return ans;
}
int secondRightmostZeroBit(int n) {
  return answer(n);
}
