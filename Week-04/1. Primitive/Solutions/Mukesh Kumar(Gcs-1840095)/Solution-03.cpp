#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int i,n,count=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {cin>>a[i];
	    if(a[i]==0)
	    ++count;
	    }
	   cout<<count<<endl;
	
	}return 0;
}
