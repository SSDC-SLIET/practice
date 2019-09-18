#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	int a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{   cin>>a;
	    cin>>b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<a<<" "<<b;
        cout<<endl;
	}
	return 0;
}
