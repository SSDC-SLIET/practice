#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0)
	{
	    int n,max,secmax,loc=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    max=a[0];
	    for(int j=1;j<n;j++)
	    {
	        if(max<a[j])
	          {max=a[j];
	          loc=j;}
	    }
	    a[loc]=0;
	    secmax=a[0];
	    for(int j=1;j<n;j++)
	    {
	         if(secmax<a[j])
	          secmax=a[j];
	    }
	    cout<<(max*secmax)<<endl;
	    t--;
	}
	return 0;
}
