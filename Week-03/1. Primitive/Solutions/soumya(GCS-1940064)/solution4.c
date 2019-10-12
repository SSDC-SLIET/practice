#include <stdio.h>

int main() {
	int t,n,sum;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d %d",&n,&sum);
	    int a[n],S,count=0;
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    for(int j=0;j<n-1;j++)
	    {
	        for(int k=j+1;k<n;k++)
	        {
	            S=a[j]+a[k];
	            if(S==sum)
	            {
	                count++;
	            }
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
