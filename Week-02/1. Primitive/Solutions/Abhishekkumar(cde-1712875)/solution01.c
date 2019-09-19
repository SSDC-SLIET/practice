#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    int a,b;
    scanf("%d%d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("%d %d",a,b);
     printf("\n");
    }
    return 0;
}
