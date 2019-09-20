#include <stdio.h>

int main() {
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	   scanf("%d",&n);
	   int a[n];
	   for(int j=0;j<n;j++)
	   {scanf("%d",&a[j]);}
	   if(n==1)
	   {printf("%d %d",a[0],a[0]);}
	   else
	   {
	       int max=a[0];
	       for(int j=1;j<n;j++)
	       {
	           if(a[j]>max)
	               {max=a[j];}
	       }
	       int min=a[0];
	       for(int j=1;j<n;j++)
	       {
	            if(a[j]<min)
	               {min=a[j];}
	       }
	       printf("%d %d",max,min);
	   }
	   printf("\n");
	}
	return 0;
}
