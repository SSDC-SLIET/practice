#include <iostream>
using namespace std;

int main() 
{
    int i,j,A,B,T,n,v,tag=0;
    scanf("%d",&T);
    
    for(i=0;i<T;i++)
    { 
        tag=0;
        scanf("%d %d %d",&n,&A,&B);
        int a[n];
        
        for(j=0;j<n;j++)
         {
           scanf("%d",&a[j]);
            
         }
         for(j=A;j<=B;j++)
         {
             for (v=0;v<n;v++)
             {
                 if(j==a[v])
                 {
                    tag++;
                    break;
                 }
             }
         }
     
     if(tag==(B-A+1))
     printf("Yes\n");
     else 
     printf("No\n");
    
    }
     
	return 0;
}
