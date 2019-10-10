#include <stdio.h>

int main() {
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    int p=1;
	    for(int j=1;j<=n;j++)
	    {
	        printf("%d ",p);
	        p=p*(n-j)/j;
	    }
	    printf("\n");
	}
	return 0;
}
