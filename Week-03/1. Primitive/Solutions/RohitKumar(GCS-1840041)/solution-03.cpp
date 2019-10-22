#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int max1,max2;
	    max1=a[0];
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>max1)
	        {
	        max1=a[i];
	        m=i;}
	    }
	    a[m]=-5;
	     max2=a[0];
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>max2)
	        {
	            max2=a[i];
	        }
	    }
	    cout<<max1*max2<<endl;
	    
	}
	return 0;
}
