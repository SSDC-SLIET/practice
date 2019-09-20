int convertFive(int n)
{
int i,x=1,sum=0;
  while(n>0)
  {
      i=n%10;
      if(i==0)
      sum=sum+5*x;
      else sum=sum+i*x;
      n/=10;
      x=x*10;
  }    return sum;
  
}
