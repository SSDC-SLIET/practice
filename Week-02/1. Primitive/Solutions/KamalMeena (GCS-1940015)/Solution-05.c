#include<stdio.h>
#include<string.h>
int main()
{
	//code
	char a[1000];
	int i,j,length,t;
	
     scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%s",&a);
	    length=strlen(a);
	
	for(j=length-1 ; j>=0 ; j--)
	{
	    printf("%c",a[j]);
	}
	printf("\n");
	
}
return 0;
}
