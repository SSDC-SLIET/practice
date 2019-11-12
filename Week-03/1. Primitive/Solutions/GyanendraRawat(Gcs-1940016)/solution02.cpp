
int convertFive(int n)
{
  int i=1,x=0,r,p;

  do
  {
    r=n%10;
    if(r==0)
        r=5;

    x=x+(i*r);
    n=n/10;
    i=i*10;
  }while(n!=0);

  return x;
}
