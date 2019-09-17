#include <iostream>
using namespace std;

int main()
{
   int cases,t,min,max,terms;
   scanf("%d",&cases);
   
   for(t=0;t<cases;t++)
   {
     int count=0;  
     scanf("%d%d%d",&terms,&min,&max);
     int array[terms];
     
     for(int i=0;i<terms;i++)
     {
        scanf("%d",&array[i]);
     }
     
     for(int i=min;i<=max;i++)
     {
        for(int j=0;j<terms;j++)
         {
            if(i==array[j])
            {
                count++;
                break;    
            }
         } 
        
     }
     
    if(count==max-min+1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
   }
}
