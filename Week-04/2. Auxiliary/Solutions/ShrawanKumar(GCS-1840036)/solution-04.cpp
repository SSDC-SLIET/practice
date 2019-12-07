#include<iostream>
using namespace std;
int main()
 {
	//cout<<"It's me Shrawan";
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int n;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int k=0;k<n;k++)
	          cin>>a[i][k];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[0][i]<<" ";
	    }
	    for(int i=1;i<n-1;i++)
	    {
	        cout<<a[i][0]<<" "<<a[i][n-1]<<" ";
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(n>1)
	        cout<<a[n-1][i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
