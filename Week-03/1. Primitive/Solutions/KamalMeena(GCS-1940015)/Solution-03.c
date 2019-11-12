#include<stdio.h>
int main()
{
    int i,j,n,t,max1,max;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
    
    int max_idx=0;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_idx=i;
        }
    }
    
    a[max_idx] = -5;

    max1=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max1=a[i];
        }
    }

    printf("%d\n",max1*max);
    }
    return 0;
    }
