#include <iostream>
using namespace std;

int main() 
{int t,i;
long long int a,b;
	//code
	cin>>t;
	for(i=1;i<=t;i++)
	{
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<" "<<b<<endl;
	}
	return 0;
}
