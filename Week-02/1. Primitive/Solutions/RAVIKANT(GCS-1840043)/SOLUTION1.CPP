#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    long int a,b;
	    cin>>a>>b;
	    a=a+b;
	    b=a-b;
	    a=a-b;
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}
