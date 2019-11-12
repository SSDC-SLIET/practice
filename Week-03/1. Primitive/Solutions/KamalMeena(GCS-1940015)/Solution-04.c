#include<stdio.h>
int main()
{
	int i,j,K,T,N,l,m;

	    scanf("%d",&T);
	for(i=0;i<T;i++)
	{   int count=0;
	    
	    scanf("%d %d",&N,&K);
	    int a[N];
	    for(j=0;j<N;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    for(l=0;l<N;l++)
	    {
	        for(m=l+1;m<N;m++)
	        {
	            if(a[l]+a[m]==K)
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
