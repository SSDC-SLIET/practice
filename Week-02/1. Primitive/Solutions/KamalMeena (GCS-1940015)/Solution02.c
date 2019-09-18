#include<stdio.h>
int main()
{
	
	int i,j,T,A[100],N,k;
	scanf("%d",&T);
	//scanf("%d",&N);
	for(i=0;i<=T-1;i++)
	{   
	    scanf("%d",&N);
	   
	    
	    for(j=0;j<=N-1;j++)
	    {  
	        scanf("%d",&A[j]);
	    }
	    for(k=N-1;k>=0;k--)
	    {
	        printf("%d ",A[k]);
	    }
	    printf("\n");
	}
	
	return 0;
}
