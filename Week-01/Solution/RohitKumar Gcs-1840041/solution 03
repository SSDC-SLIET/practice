#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,d;
	    cin>>n>>d;
	    int a[n],b[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	    }
	    for(int j=0;j<n;j++)
	    {
	        cin>>b[j];
	    }
	    if(d%2==0)
	    {
	        int sum1=0;
	        for(int j=0;j<n;j++)
	        {
	            if(a[j]%2!=0)
	            sum1=sum1+b[j];
	        }
	        cout<<sum1<<endl;
	    }
	    else
	    {
	        int sum2=0;
	        for(int j=0;j<n;j++)
	        {
	            if(a[j]%2==0)
	            {
	                sum2=sum2+b[j];
	            }
	        }
	        cout<<sum2<<endl;
	    }
	}
	
	return 0;
}
