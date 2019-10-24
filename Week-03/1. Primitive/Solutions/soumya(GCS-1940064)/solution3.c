#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    unsigned long int n;
	    scanf("%lu",&n);
	    long int a[n];
	    for(unsigned long int j=0;j<n;j++)
	    {
	        scanf("%ld ",&a[j]);
	    }
	    long int large=a[0];
	    for(unsigned long int j=1;j<n;j++)
	    {
	        if(a[j]>large)
	        large=a[j];
	    }
	    for(unsigned long int j=0;j<n;j++)
	    {
	        if(a[j]==large)
	        {
	            a[j]=0;
	            break;
	        }
	    }
	    long int small=a[0];
	    for(unsigned long int j=1;j<n;j++)
	    {
	        if(a[j]>small)
	        small=a[j];
	    }
	    unsigned long long int k;
	    k=large*small;
	    printf("%llu\n",k);
	}
	return 0;
}
