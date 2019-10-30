#include <stdio.h>

void main()
{
    int x,i,t,j,n,k,a[50],count;
    
    scanf("%d",&t);
    for(i=0;i<t;i++)
    
        {
           scanf("%d",&n);
           scanf("%d",&k);
           for(j=0;j<n;j++)
            {
                scanf("%d",&a[j]);

            }
            count=0;
               for(j=0;j<n;j++)
               {
                   x=j+1;
                  while(x<n)
                  {
                    if(a[j]+a[x]==k)
                     count++;
                     x++;
                  }
               }

        printf("%d\n",count);
        }
}
