#include <stdio.h>

int main() {
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	    int n,d,i=0;
	    scanf("%d %d",&n,&d);
	    int a[n],b[n],c;
	    c = d % 2;
	    for(i-0;i<n;i++)
	    {
	        scanf("%d", &a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d", &b[i]);
	    }
	    int s=0;
	    int x;
	    if(c==0)
	    {
	        for(i=0;i<n;++i)
	        {
	            x = a[i]%2;
	            if(x != 0)
	            {
	                s = s+b[i];
	            }
	            x = 0;
	        }
	        printf("%d\n", s);
	    }
	    else if(c!=0)
	    {
	        for(i=0;i<n;++i)
	        {
	            x = a[i] % 2;
	            if(x == 0)
	            {
	                s = s + b[i];
	            }
	            x = 0;
	        }
	        printf("%d\n", s);
	    }
	}
	return 0;
}
