int convertFive(int n)
{
    int c,d=0,i=1;
//Your code here
while(n!=0)
{
 c=n%10;
 if(c!=0)
 {
 d=i*c+d;
 }
 else
 {
 d=i*5+d;
 }
 i=i*10;
 n=n/10;
}
return d;
}
