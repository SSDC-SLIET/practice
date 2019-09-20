#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0 ;i<n; i++)
	        cin>>a[i];
	 
	    int max=a[0];
	    int min=a[0];
	    for(i=0 ;i<n; i++)
	    {
	        if(a[i]>max)
	           max=a[i];
	    }
	    for(i=0 ;i<n; i++)
	    {
	        if(a[i]<min)
	           min=a[i];
	    }
	    cout<<max<<" ";
	    cout<<min<<" ";
	    cout<<endl;
	}
	return 0;
}
