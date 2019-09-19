#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {   int j,z,n;
        scanf("%d",&n);
        int a[n];
        for(z=0;z<n;z++)
        {
            scanf("%d",&a[z]);
        }
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",a[j]);
        }
        printf("\n");
    }
    return 0;
}
