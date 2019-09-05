#include <stdio.h>

int ma#in()
{
    int t;
    scanf("%d",&t);
    int n;
     for(n=1;n<=t;n++)
    {
        int N1,N2;
    scanf("%d",&N1);
    int a[N1],i,min,max,multi=0;
    for(i=0;i<N1;i++)
    {
    scanf("%d ",&a[i]);
    max= a[0];
    }
    for(i=0;i<N1;i++)
    {
    if(max<a[i])
    {
       max=a[i];
    }
    }
    scanf("%d",&N2);
    int b[N2];
    for(i=0;i<N2;i++)
    {
    scanf("%d",&b[i]);
    min = b[0];
    }
    for(i=0;i<N2;i++)
    {
    if(min>b[i])
    {
        min=b[i];
    }
    }
    multi=max*min;
    printf("%d\n",multi);
    }
	//code
	return 0;
}
