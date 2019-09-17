#include <iostream>
using namespace std;

int main()
{
   int cases,t,min,max,terms,flag=0;
   scanf("%d",&cases);
   
   for(t=0;t<cases;t++)
   {
     scanf("%d%d%d",&terms,&min,&max);
     int array[terms];
     
     for(int i=0;i<terms;i++)
     {
         if(array[i]>max || array[i]<min)
         {
            flag=1;
            break;
         }
     }
     
    if(flag==1)
    {
        printf("No\n");
        flag=0;
    }
    else
    {
        printf("Yes\n");
    }
    
   }
}
