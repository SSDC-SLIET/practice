#include <stdio.h>

int main() {
    int t,i,j,n,max,min;
    
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
     scanf("%d",&n);
    
    int a[n];
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[j]);
    }
    max=a[0];
    for(j=0;j<n;j++)
    {
    if(max<a[j])
     max=a[j];
    }
    min=a[0];
     for(j=0;j<n;j++) 
     {
     if(min>a[j])
        min=a[j];
     }
   
     printf("%d %d",max,min);
     printf("\n");
      }
	//code
	return 0;
}
