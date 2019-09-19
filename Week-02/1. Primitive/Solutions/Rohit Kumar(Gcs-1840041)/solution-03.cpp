#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	    }
	    for(int j=n-1;j>=0;j--)
	    {
	        cout<<a[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
