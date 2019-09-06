#include <iostream>
using namespace std;

int main()
{
	int cases,terms,date,odd_fine,even_fine;
	scanf("%d",&cases);
	
	for(int t=0;t<cases;t++)
	{
	    odd_fine=0,even_fine=0;
	    scanf("%d%d",&terms,&date);
	    
	    int cars[terms],fine[terms];
	    
	    for(int i=0;i<terms;i++)
	    {
	        scanf("%d",&cars[i]);
	    }
	    
	    for(int i=0;i<terms;i++)
	    {
	        scanf("%d",&fine[i]);
 	        if(cars[i]%2==0)
	           odd_fine=odd_fine+fine[i];
	        else
	           even_fine=even_fine+fine[i];
	    }
	   
	  if(date%2==0)
	     printf("%d\n",even_fine); 
      else
         printf("%d\n",odd_fine);
	}
	return 0;
}
