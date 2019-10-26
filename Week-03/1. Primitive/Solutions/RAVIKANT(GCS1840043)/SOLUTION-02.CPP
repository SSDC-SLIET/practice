#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,k,c;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    c=0;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(a[i]+a[j]==k)
	             c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
