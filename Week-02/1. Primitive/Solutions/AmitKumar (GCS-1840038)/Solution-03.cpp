#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	for(int i=0; i<T; i++)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    for(int i=0, j=n-1; i<j; i++, j--)
	       swap(a[i],a[j]);
	   
	    for(int i=0; i<n; i++)
	        cout<<a[i]<<" ";
	        cout<<endl;
	}
}
