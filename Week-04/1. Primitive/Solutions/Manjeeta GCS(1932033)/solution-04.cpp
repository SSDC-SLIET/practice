#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int s[n]={0};
	    int a,b,k;
	    for(int i=0;i<m;i++)
	    {
	        cin>>a>>b>>k;
	        for(int j=a;j<=b;j++)
	        {
	            s[j]+=k;
	        }
	    }
	    int max=s[0];
	    for(int i=1;i<n;i++)
	    {
	        if(s[i]>max)
	        max=s[i];
	    }
	    cout<<max<<endl;
	}
	return 0;
}
