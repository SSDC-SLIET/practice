#include <iostream>
using namespace std;

int main()
{
	int cases,a,b;
	
	cin >> cases;
	while(cases--)
	{
	    cin >> a >> b;
	    
	    a=a+b;
	    b=a-b;
	    a=a-b;
	    
	    cout << a << " " << b << endl;
	    
	    
	}
	return 0;
}
