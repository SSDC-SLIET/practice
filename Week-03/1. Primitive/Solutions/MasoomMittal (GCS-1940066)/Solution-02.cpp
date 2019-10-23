int convertFive(int n)
{
//Your code here
    int i,k=1,ans=0;
    while(n>0)
    {
        i=n%10;
        if(i==0)
        ans+=5*k;
        else ans+=i*k;
        n/=10;
        k*=10;
    }
    return ans;
}
