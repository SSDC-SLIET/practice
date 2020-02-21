

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int m;
	    cin>>m;
	    int a[m];
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+m);
	    int k;
	    cin>>k;
	    cout<<a[k-1];
	    cout<<endl;
	}
	return 0;
}
