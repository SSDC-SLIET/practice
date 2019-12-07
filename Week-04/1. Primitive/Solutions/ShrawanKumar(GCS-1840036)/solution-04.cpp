#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//cout<<"It's me Shrawan";
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    long n,m,a,b,k,r,mx=-1;
	    cin>>n>>m;
	    int ar[n]={0};
	    for(int i=0;i<m;i++)
	    {
	        cin>>a>>b>>k;
	        for(r=a;r<=b;r++)
	           ar[r]=ar[r]+k;
	    }
	    cout<<*max_element(ar,ar+n)<<endl;
	}
	return 0;
}
