#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a[2],b[2];
	    for(int j=0;j<2;j++)
	    {scanf("%d",&a[j]);}
	    b[0]=a[1];
	    b[1]=a[0];
	    for(int j=0;j<2;j++)
	    {
	        printf("%d ",b[j]);
	    }
	    printf("\n");
	}
	return 0;
}
