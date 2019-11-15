#include <stdio.h>

int main() {
	int t,n,m;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d %d",&n,&m);
	    int a[n];
	    for(int j=0;j<n;j++)
	    {
	        a[j]=0;
	    }
	    for(int j=0;j<m;j++)
	    {
	        int b[3];
	        for(int k=0;k<3;k++)
	        {
	            scanf("%d",&b[k]);
	        }
	        for(int k=b[0];k<=b[1];k++)
	        {
	            a[k]=a[k]+b[2];
	        }
	    }
	    int large;
	    large=a[0];
	    for(int k=1;k<n;k++)
	    {
	        if(a[k]>large)
	        large=a[k];
	    }
	    printf("%d\n",large);
	}
	return 0;
}
