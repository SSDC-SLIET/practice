int convertFive(int n)
{
int a,t=0,j=1;

while(n!=0){

a=n%10;
n=n/10;
if(a==0){
    a=5;
}
t=a*j+t;
j=j*10;
}


return t;
}
