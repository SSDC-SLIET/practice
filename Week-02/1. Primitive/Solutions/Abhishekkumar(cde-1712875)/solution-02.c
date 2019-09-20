int convertFive(int n)
{
int a;
if(n==0)
return 0;
a=n%10;
if(a==0)
a=5;
return convertFive(n/10)*10+a;
    
}
