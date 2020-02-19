#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int max=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(max<arr[i])
	            max=arr[i];
	    }
	    int k;
	    cin>>k;
	    int temp[max+1]={0};
	    for(int i=0;i<n;i++)
	    {
	        temp[arr[i]]=1;
	        
	    }int i;
	    for(i=0;i<max+1;i++)
	    {
	        if(temp[i])
	          k--;
	        if(k==0)
	          break;
	    }
	    cout<<i<<endl;
	    }
	return 0;
}
