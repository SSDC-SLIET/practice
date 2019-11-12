#include <bits/stdc++.h>
#include <iostream>

using namespace std;
typedef unsigned long long ull;

ull fact(ull n, ull r)
{
    if(n-r < r)
       r=n-r;
    
   // if(r==0 || r==n || n==0)
   //    return 1;
    
    ull product1=1,product2=1;
    
    for(ull i=0 ; i<r ; i++)
    {
        product1 *= (n-i);
        product2 *= (r-i);
    }
    
  return product1/product2;
}

int main() {
	//code
	ull i,t,n;
	cin >> t;
	for(i=0;i<t;i++)
	{
	    cin >> n;
	    for(int j=0;j<n;j++)
	    {
            cout << fact(n-1,j) << " ";
	    }
	    cout << endl;
	}
	return 0;
}

