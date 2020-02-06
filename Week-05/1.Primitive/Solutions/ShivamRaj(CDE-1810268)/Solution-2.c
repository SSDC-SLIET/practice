#include<iostream>
int main() 
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int a;
	    scanf("%d",&a);
	    if(a%3==0)
	    {
	        printf("%d",(a/3)-1);
	        printf(" ");
	        printf("%d",a/3);
	        printf(" ");
	        printf("%d",(a/3)+1);
	        printf("\n");
	    }
	    else
	    {
	        printf("-1");
	        printf("\n");
	    }
	}
	return 0;
}
