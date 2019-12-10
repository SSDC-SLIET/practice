#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int n,k,count=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int l=0;l<n;l++)
	    {
	        for(int m=0 && m!=l; m<n; m++)
	        {
	            if(arr[l]%arr[m]==k)
	            ++count;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
