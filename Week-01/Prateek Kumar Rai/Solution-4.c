#include <stdio.h>

int main() {
	int t,j=0;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	    int n,i=0;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d", &a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i] != a[i+1] && a[i] != a[i-1])
	        {
	            printf("%d\n", a[i]);
	        }
	    }
	}
	return 0;
}
