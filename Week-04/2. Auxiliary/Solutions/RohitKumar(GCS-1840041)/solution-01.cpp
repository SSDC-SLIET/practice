#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,k;
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    //sort(a,a+n);
	    int m=0;
	   /* for(i=0;i<n;i++)
	    {
	        cout<<a[i];
	    }*/
	    for(i=0;i<n;i++)
	    {
	    for(int j=0;j<n;j++)
	    {
	      if(a[i]%a[j]==k)
	      {
	          cout<<a[i]<<" "<<a[j]<<endl;
	          m++;
	      }
	    }
	    }
	    cout<<m<<endl;
	}
	return 0;
}
