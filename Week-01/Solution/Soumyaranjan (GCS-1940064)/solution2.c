#include <stdio.h>

int main() {
	int T,n,d,x;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{scanf("%d",&n);
	int a[n],b[n],sum=0;
	    scanf("%d",&d);
	    for(int j=0;j<n;j++)
	    {scanf("%d",&a[j]);
	    }
	    for(int j=0;j<n;j++)
	    {scanf("%d",&b[j]);
	    }
	    if(d%2==0)
	    {for(int j=0;j<n;j++)
	        {x=a[j]%2;
	        if(x==1)
	        {sum=sum+b[j];}
	    }}
	    else
	    {for(int j=0;j<n;j++)
	        {x=a[j]%2;
	            if(x==0)
	            {sum=sum+b[j];}
	        }
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
