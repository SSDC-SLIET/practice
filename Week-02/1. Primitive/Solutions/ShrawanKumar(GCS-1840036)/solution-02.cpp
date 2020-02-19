int convertFive(int n)
{
    int i=1,count=0,num=0;
    while(n)
    {
        count = n%10;
        if(count==0)
          count=5;
        num=num+count*i;
        i *= 10;
        n=n/10;
    }
    return num;
}
