#include <stdio.h>

int main() {
int T,n,A,B;
scanf("%d",&T);
for(int i=0;i<T;i++)
{
    scanf("%d%d%d",&n,&A,&B);
    int a[n];
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]<A || a[j]>B)
        {printf("No\n");
            break;
        }
        else if(j==n-1)
        {if(a[j]>A && a[j]<B)
            {printf("Yes\n");
                break;
            }
        }
        else
       { continue;
       }
    }
}
	
	return 0;
}
