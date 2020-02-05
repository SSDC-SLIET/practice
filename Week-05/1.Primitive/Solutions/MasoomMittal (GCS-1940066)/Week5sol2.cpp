#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a;
	    cin>>a;
	    if(a%3==0)
	    {
	        cout<<(a/3)-1<<" "<<a/3<<" "<<(a/3)+1<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
