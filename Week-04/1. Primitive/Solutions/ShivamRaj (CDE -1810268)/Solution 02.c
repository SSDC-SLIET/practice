#include<stdio.h>
#include<conio.h>
int main()
{

    int t,i;
    scanf("%d",&t);
    for(i=0;i<=t;i++)
    {
        int i,j,n,z=0,m;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        m=n/2;
        int sum=0,sum2=0;
        for(i=0;i<m;i++)
        {
            sum=sum+a[i];
        }
        for(j=m;j<n;j++)
            sum2+=a[j];
        z=sum*sum2;
        printf("%d",z);
    }
    return 0;
}
    
