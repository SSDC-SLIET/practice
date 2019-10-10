int convertFive(int n)
{
    int r,i=1,sum=0;
    while(n>0)
    {
        r=n%10;
        if(r==0)
        {sum=sum+(i*5);}
        else
        {sum=sum+(i*r);}
        n=n/10;
        i=i*10;
    }

    return sum;
}
