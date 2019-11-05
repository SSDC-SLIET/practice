#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i,multi;
	    for(i=0;i<=n;i++)
	       cin>>a[i];
	       sort(a,a+n);
	       cout<<a[n-1]*a[n-2];
	   
	}
	return 0;
}

