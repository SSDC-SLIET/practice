#include <iostream>
using namespace std;

int main() {
	int a,b,t;
	
	cin>>t;
	while(t--){
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<" "<<b<<endl;
	}
	
	return 0;
}
