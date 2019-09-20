#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
	   int i,n;
	    cin>>n;
	   int a[n];
	   for(i=0;i<n;i++)
	    { cin>>a[i];}
	    
	   int max=0,min=0;
	    max=a[0];
	    for(i=1;i<n;i++)
	    {
	      if(a[i]>max)
	       max=a[i];
	    }
	    cout<<max<<" ";
	    min=a[0];
	    for(i=1;i<n;i++)
	    {
	        if(min>a[i])
	    min=a[i];
	    }
	    cout<<min<<endl;
	}
	    return 0;
}
