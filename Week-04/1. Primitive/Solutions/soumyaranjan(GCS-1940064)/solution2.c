#include <stdio.h>

int main() {
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    int a[n];
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d ",&a[j]);
	    }
	    int p=n/2;
	    int sum1=0,sum2=0;
	    for(int j=0;j<p;j++)
	    {
	        sum1=sum1+a[j];
	    }
	    for(int k=p;k<n;k++)
	    {
	        sum2=sum2+a[k];
	    }
	    int M=sum1*sum2;
	    printf("%d\n",M);
	}
	return 0;
}
