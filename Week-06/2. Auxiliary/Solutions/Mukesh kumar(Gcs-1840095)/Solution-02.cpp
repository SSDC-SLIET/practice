#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
 int t;
 cin>>t;
 while(t--)
 {
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
     
     sort(a,a+n);
	    cin>>k;
	    cout<<a[k-1];
	    cout<<endl;
     }
	return 0;
}
