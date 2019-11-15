#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],p;
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(a[j]==0)
	        {
	            p=n-j;
	            break;
	        }
	        if(a[n-1]==1)
	        {
	            p=0;
	        }
	    }
	    printf("%d\n",p);
	}
	return 0;
}
