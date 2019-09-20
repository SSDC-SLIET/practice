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
	    cin>>a[i];
	    for(i=n-1;i>=0;i--)
	    {
	    cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
