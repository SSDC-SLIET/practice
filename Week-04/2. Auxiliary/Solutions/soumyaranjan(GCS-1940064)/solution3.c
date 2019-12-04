#include <stdio.h>
unsigned long long int fact(int);
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n,m;
	    unsigned int result;
	    scanf("%d%d",&n,&m);
	    int k=m+n;
	    result=fact(k)/(fact(n)*fact(m));
	    printf("%u\n",result);
	}
	return 0;
}
unsigned long long int fact(int x)
{
    unsigned long long int f=1;
    while(x>0)
    {
        f=f*x;
        x--;
    }
    return f;
}
