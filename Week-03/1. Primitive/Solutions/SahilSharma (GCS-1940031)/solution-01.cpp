#include <iostream>
using namespace std;

unsigned long long fact(int n,int r)
{
    unsigned long long product1=1,product2=1,res;
    if(n==0 || r==0 || r==n)
    return(1); 
    
    if(r>n/2)
    {
        r=n-r;
    }
    
    for(int i=0 ; i<r ; i++)
    {
        product1*=(n-i);
        product2*=(r-i);
    }
    
    res=product1/product2;
    return(res);
}


int main()
{
  int cases,row;
	
	cin >> cases;

	while(cases--)
	{
	    cin >> row;
	    
	    for(int i=0 ; i<row ; i++)
	    {
	       cout << fact(row-1,i) << " "; 
	    }
	    
	    cout << endl;
	}
	return 0;
}
