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
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n/2;i++)
	    {
	        cout<<a[n-1-i]<<" ";
	        cout<<a[i]<<" ";
	     /*   if(n%2!=0)
	       {
	      cout<<a[n/2];
	       }*/
	    }
	       if(n%2!=0)
	       cout<<a[n/2];
	    
	    
	    cout<<endl;
	}
	return 0;
}
