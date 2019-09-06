#include<iostream>
using namespace std;
int main()
 {
	int i,t;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    int n,j,k;
	    cin>>n;
	    int a[n][n];
	    for(j=0;j<n;j++)
	        for(k=0;k<n;k++)
	        cin>>a[j][k];
	    
	    for(k=0;k<n;k++)
	    { 
	     for(j=n-1;j>=0;j--)
	     cout<<a[j][k]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
