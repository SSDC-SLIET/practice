#include <stdio.h>

int main() {
	int T,n1,n2,p,large,small;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{scanf("%d",&n1);
	int a[n1];
	    for(int j=0;j<n1;j++)
	    {scanf("%d",&a[j]);
	    }
	 scanf("%d",&n2);
	 int b[n2];
	     for(int j=0;j<n2;j++)
	     {scanf("%d",&b[j]);
	     }
	   large=a[0];
	   for(int j=1;j<n1;j++)
	   {if(a[j]>large)
	   {large=a[j];
	   }}
	   small=b[0];
	   for(int k=1;k<n2;k++)
	   {if(b[k]<small)
	   {small=b[k];
	   }}
	   p=large*small;
	   printf("%d\n",p);
	}
	return 0;
}
