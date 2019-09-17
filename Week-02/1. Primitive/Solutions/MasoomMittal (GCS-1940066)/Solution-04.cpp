#include <iostream>
using namespace std;

int main() {
	//code
	int t,n1;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
	    cin>>n1;
	    int a[n1];
	    for(int i=0;i<n1;i++)
	    cin>>a[i];
	    int max=a[0];
	    for(int i=1;i<n1;i++)
	    {
	        if(a[i]>max)
	        max=a[i];
	    }
	    int min=a[0];
	    for(int i=1;i<n1;i++)
	    {
	        if(a[i]<min)
	        min=a[i];
	    }
	    cout<<max<<" ";
	   cout<<min<<endl;
	}
	return 0;
}
