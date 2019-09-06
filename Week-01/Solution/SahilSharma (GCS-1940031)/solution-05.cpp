#include <iostream>
using namespace std;

int main() 
{   
    int cases,terms,sum,flag=0,i,j;
    scanf("%d",&cases);
    
    for(int t=0;t<cases;t++)
    {
        scanf("%d",&terms);
        int array[terms];
        
        for(i=0;i<terms;i++)
        {
            scanf("%d",&array[i]);
        }
        
        scanf("%d",&sum);
        
        i=0;
        j=terms-1;
        while(1)
        {
            if(array[i]+array[j]==sum)
            {
              printf("%d %d %d\n",array[i],array[j],sum);
              i++;
              flag=1;
            }
            else if(array[i]+array[j]>sum)
            j--;
            else if(array[i]+array[j]<sum)
            i++;
            
            if(i>=j)
            break;
        }
        
        if(flag==0)
        printf("-1\n");
        
        if(flag==1)
        flag=0;
    }
	return 0;
}
