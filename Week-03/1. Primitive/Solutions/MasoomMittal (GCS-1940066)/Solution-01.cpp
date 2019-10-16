#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    int k=1;
	    for(int j=1;j<=n;j++)
	    {
	        cout<<k<<" ";
	        k=k*(n-j)/j;

	    }
	    cout<<endl;
	}
	return 0;
}
