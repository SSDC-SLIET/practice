#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    cout<<(a+b)%12<<endl;
	}
	return 0;
}
