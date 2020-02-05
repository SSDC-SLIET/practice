#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a;
	    cin>>b;
	    if(a+b<12)
	    {
	        cout<<a+b<<endl;
	    }
	    else if((a+b)>=12)
	    {
	        cout<<(a+b)%12<<endl;
	    }
	    
	}
	return 0;
}
