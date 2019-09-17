#include <iostream>
using namespace std;

int main()
{
	int cases,terms,variac=0;
	scanf("%d",&cases);
	
	for(int t=0;t<cases;t++)
	{
	  variac=0;  
	  scanf("%d",&terms);
	  int array[terms];
	  
	  for(int i=0;i<terms;i++)
	  {
	      scanf("%d",&array[i]);
	      variac=variac^array[i];
	  }
	  
          printf("%d\n",variac);
	    
	}
    return 0;
}
