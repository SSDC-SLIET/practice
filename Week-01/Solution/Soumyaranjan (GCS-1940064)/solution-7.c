#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{int n;
	    scanf("%d",&n);
	    int a[n][n];
	    for(int j=0;j<n;j++)
	    {for(int k=0;k<n;k++)
	        {scanf("%d",&a[j][k]);
	        }
	    }
	    for(int k=0;k<n;k++)
	    {for(int j=n-1;j>=0;j--)
	        {printf("%d ",a[j][k]);
	        }
	    }
	    printf("\n");
	}
	return 0;
}
