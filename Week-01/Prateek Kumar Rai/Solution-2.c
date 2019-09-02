#include <stdio.h>
int main() {
	int a[1000],b=0,n,A,B,i=0,t,j=0,s=0,result;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	scanf("%d %d %d", &n,&A,&B);
	for(i=0;i<n;i++)
	{
	    scanf("%d", &a[i]);
	}
	for(i=A;i<=B;i++)
	{
	    b++;
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]>=A && a[i]<=B)
	    {
	        s++;
	    }
	}
	if(b == s)
	{
	    printf("Yes\n");
	}
	else
	{
	    printf("No\n");
	}
	}
	return 0;
}
