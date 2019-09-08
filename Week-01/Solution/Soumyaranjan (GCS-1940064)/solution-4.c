#include <stdio.h>

int main() {
	int T,n;
	float d;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{scanf("%d",&n);
	int a[n];
	    for(int j=0;j<n;j++)
	    {scanf("%d",&a[j]);
	    }
	    for(int j=0;j<n;j++)
	    {for(int k=j+1;k<n;k++)
	        {if(a[k]!=0)
	        {d=(float)a[j]/a[k];
	            if(d==1)
	            {a[j]=0;
	                a[k]=0;
	            }
	        }
	    }
	}
	    for(int m=0;m<n;m++)
	    {if(a[m]!=0)
	        {printf("%d\n",a[m]);
	            
	        }
	    }
	}
	return 0;
}
