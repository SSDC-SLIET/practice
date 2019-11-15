#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n,x;
	    scanf("%d%d",&n,&x);
	    unsigned int a[n],count=0;
	    for(int j=0;j<n;j++)
	    {
	        scanf("%u",&a[j]);
	    }
	    for(int j=0;j<n-1;j++)
	    {
	        for(int k=j+1;k<n;k++)
	        {
	            if(a[j]%a[k]==x)
	            count++;
	            if(a[k]%a[j]==x)
	            count++;
	        }
	    }
	    printf("%u\n",count);
	}
	return 0;
}
