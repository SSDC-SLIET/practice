#include <iostream>
using namespace std;

int main() {
	//code
	int a,b,t,c;
	cin>>t;
	for(int i=1;i<=t;i++)
	 {
	     cin>>a>>b;
	     c=a+b;
	     a=c-a;
	     b=c-b;
	     cout<<a<<" "<<b<<endl;
	   
	     
	     
	 }
	return 0;
}
