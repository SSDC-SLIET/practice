#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	    cin>>a[i];
	    }
	   int l=a[0];
	   for(i=1;i<n;i++)
	  {
	      l=l^a[i];
	  }
	       cout<<l<<endl;
     	} 
	return 0;
 }
