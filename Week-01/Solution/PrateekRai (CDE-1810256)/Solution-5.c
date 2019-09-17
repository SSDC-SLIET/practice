#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int n,j;
        scanf("%d", &n);
        
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[j]);
        }
        int s;
        scanf("%d", &s);
        j=0;
        int k=n-1,count=0;;
        
        while(j<k)
        {
            
            if(a[j]+a[k]==s)
            {
                printf("%d %d %d\n",a[j],a[k],s);
                count++;
                j++;
                k--;
            }
            
            else if(a[j]+a[k]<s)
            {
                j++;
            }
            else
            {
                k--;
            }
            
        }
        
        if(count == 0)
            {
                printf("-1\n");
            }
        
    }
}
