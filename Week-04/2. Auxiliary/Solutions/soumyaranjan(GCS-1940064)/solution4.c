#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n][n];
	    for(int j=0;j<n;j++)
	    {
	        for(int k=0;k<n;k++)
	        {
	            scanf("%d",&a[j][k]);
	        }
	    }
	    for(int j=0;j<n;j++)
	    {
	        for(int k=0;k<n;k++)
	        {
	            if(j==0||j==n-1||k==0||k==n-1)
	            printf("%d ",a[j][k]);
	        }
	    }
	    printf("\n");
	}
	return 0;
}
