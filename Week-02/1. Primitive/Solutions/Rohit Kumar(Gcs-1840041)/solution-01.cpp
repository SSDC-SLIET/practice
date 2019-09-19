
#include <iostream>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	int i;
	for(i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int temp;
	    temp=b;
	    b=a;
	    a=temp;
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}
