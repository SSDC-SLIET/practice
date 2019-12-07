#include<iostream>
using namespace std;
int main()
 {
	//cout<<"It's me Shrawan";
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int n,k,count=0;
	    cin>>n>>k;
	    long a[n];
	    for(int i=0;i<n;i++)
	       cin>>a[i];
	    for(int i=0;i<n;i++)
	    {
	        for(int r=0;r<n;r++)
	            if(a[i]%a[r]==k)
	               count=count+1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
