#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j;
	    cin>>n;
	    int a[n][n];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    int s1=0,s2=0;
	    for(i=0;i<n;i++)
	    {
	        s1+=a[i][i];
	        s2+=a[i][n-i-1];
	    }
	    cout<<abs(s1-s2)<<endl;
	}
	return 0;
}
