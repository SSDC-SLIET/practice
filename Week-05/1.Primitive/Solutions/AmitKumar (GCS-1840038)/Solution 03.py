#include<iostream>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0; i<n; i++)
	       cin>>a[i];
	    for(i=n-1; i>=n/2; i--)
	    {
	        cout<<a[i]<<" ";
	        if(n%2!=0 && i==n/2)
                break;
	        cout<<a[n-i-1]<<" ";
	    }
	    cout<<endl;
	    T--;
	}
	return 0;
}
