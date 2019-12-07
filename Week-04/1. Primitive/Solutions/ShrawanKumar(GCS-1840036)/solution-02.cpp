#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,l=0,r=0;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++)
	       cin>>a[j];
	    for(int j=0;j<n/2;j++)
	       l=l+a[j];
	    for(int j=n/2;j<n;j++)
	       r=r+a[j];
	    cout<<l*r<<endl;    
	}
	return 0;
}
