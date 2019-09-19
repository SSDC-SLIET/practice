#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {   int j,z,n,max,min;
        scanf("%d",&n);
        int a[n];
        for(z=0;z<n;z++)
        {
            scanf("%d",&a[z]);
        }
        max=a[0],min=a[0];
        for(j=0;j<n;j++)
        {
            if(max<a[j])
                max=a[j];
            if(min>a[j])
                min=a[j];
        }
       printf("%d %d",max,min);
       printf("\n");
    }
    
    return 0;
}
