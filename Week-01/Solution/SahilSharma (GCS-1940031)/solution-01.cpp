#include <iostream>
using namespace std;

int main()
{
	int cases,n1,n2,t=0,max,min,i;
	scanf("%d",&cases);
	
	for(t=0;t<cases;t++)
	{
	  scanf("%d",&n1);
	  int max_array[n1];
	  
	  for(i=0;i<n1;i++)
	  {
	      scanf("%d",&max_array[i]);
	  }
	    
	  scanf("%d",&n2);
	  int min_array[n2];
	  
	  for(i=0;i<n2;i++)
	  {
	      scanf("%d",&min_array[i]);
	  }
	  
	  max=max_array[0];
	  min=min_array[0];
	  
	  for(i=0;i<n1;i++)
	  {
	    if(max_array[i]>max)
	    {
	      max=max_array[i];   
	    }
	  }
	  
	  for(i=0;i<n2;i++)
	  {
	    if(min_array[i]<min)
	    {
	      min=min_array[i];   
	    }
	  }
	  
	  printf("%d\n",max*min);
	}
	return 0;
}
