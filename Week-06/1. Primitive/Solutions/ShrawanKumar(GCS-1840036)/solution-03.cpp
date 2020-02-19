#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//cout<<"It's me Shrawan";
	int t,p,s;
	cin>>t;
	while(t--)
	{
	    p=0;s=0;
	    int n;
	    cin>>n;
	    int arr[n][n];
	    for(int i=0;i<n;i++)
	      for(int j=0;j<n;j++)
	        cin>>arr[i][j];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(i == j)
	               p += arr[i][j];
	            if(i+j == n-1)
	              s += arr[i][j];
	        }
	    }
	    cout<<fabs(p-s)<<endl;         
	}
	return 0;
}
