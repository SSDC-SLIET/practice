#include<iostream>
using namespace std;
int main()
 {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
	{
	    long a,b;
	    cin>>a>>b;
	    a=a*b;
	    b=a/b;
	    a=a/b;
	    cout<<a<<" "<<b<<"\n";
	}
	return 0;
}