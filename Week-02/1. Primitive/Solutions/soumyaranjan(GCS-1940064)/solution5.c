#include <stdio.h>
#include <string.h>
int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    char a[1000];
	    scanf("%s",a);
	    int len=strlen(a);
	   for(int j=len-1;j>=0;j--)
	  { printf("%c",a[j]);}
	  printf("\n");
	}
	return 0;
}
