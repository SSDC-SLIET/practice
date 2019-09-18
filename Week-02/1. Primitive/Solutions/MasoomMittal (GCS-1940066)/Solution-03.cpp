#include <iostream>
using namespace std;

int main() {
	//code
	int t,n1,k,j;
	cin>>t;
	int a[n1];
	for(int i=0;i<t;i++)
	{
	    cin>>n1;
	    for(j=0;j<n1;j++)
	    {
	        cin>>a[j];
	    }
       for(int k=n1-1;k>=0;k--)
       {
           cout<<a[k]<<" ";
       }
       cout<<endl;
	}
	return 0;
}
