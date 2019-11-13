#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int c=n/2;
	    for(int i=0;i<c;i++)
	    {
	        sum1+=a[i];
	    }
	    for(int i=c;i<n;i++)
	    {
	        sum2+=a[i];
	    }
	    cout<<sum1*sum2<<endl;
	}
	return 0;
}
