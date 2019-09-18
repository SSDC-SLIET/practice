#include <stdio.h>


int main() 
{
	//code
	int t,i,a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d",&a,&b);
	    a=a+b;
	    b=a-b;
	    a=a-b;
	    printf("%d %d",a,b);printf("\n");
	    
	}
	return 0;
}
