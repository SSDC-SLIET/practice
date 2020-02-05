#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            scanf("%d",&a[i][j]);
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=n-1;j>=0;j--)
	        {
	            printf("%d",a[j][i]);
	            printf(" ");
	        }
	    }
	    printf("\n");
	}
	return 0;
}
