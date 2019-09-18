int convertFive(int n)
{
    int sum=0,i=1;
    while(n)
    {
        sum+=i*(n%10 ? n%10 : 5);
        n/=10;
        i*=10;
    }
    
    return sum;
}
