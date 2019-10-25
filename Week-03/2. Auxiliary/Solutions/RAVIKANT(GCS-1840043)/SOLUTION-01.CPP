#include <iostream>
#include <stdio.h>
using namespace std;
long int gcd(long int a,long int b){
    if(a==0)return b;
    else
    return gcd(b%a,a);
}

int main()
{
int t;
long int a,b;
long long int val,k,n,lcm;
scanf("%d\n",&t);

while(t--)
{
   
   scanf("%lld %ld %ld %lld",&n,&a,&b,&k);

   
   lcm=(a*b)/gcd(a,b);
    if(k<=((n/a)+(n/b)-2*(n/lcm)))printf("Win\n");
    else
    printf("Lose\n");
}
	return 0;
}

