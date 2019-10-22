#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int s=1;s<=t;s++)
	{
	    int i,j,n,k,count;
	    cin>>n;
	    int a[n];
	    cin>>k;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    count=0;
	    for(i=0;i<n;i++)
	    {
	      for(j=i+1;j<n;j++)
	    { 
	         if((a[i]+a[j])==k)
	       count++;
	    }}
	    cout<<count<<endl;
}
return 0;
}
