#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int a[n][n];
	    int sum1=0,sum2=0;
	    for(int k=0;k<n;k++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[k][j];
	        
	        if(k==j)
	        {
	            sum1+=a[k][j];
	        }
	        if(k+j==n-1)
	        {
	            sum2+=a[k][j];
	        }
	        } 
	    }
	    cout<<abs(sum1-sum2)<<endl;
	    
	}
	return 0;
}
