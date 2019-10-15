#include<iostream>
using namespace std;
int main() {
	int t,n,i,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    int p=1;
	    for(j=1;j<=n;j++)
	    {
	        cout<<" "<<p;
	        p=p*(n-j)/j;
	    }
	    cout<<endl;
	}
	return 0;
}
