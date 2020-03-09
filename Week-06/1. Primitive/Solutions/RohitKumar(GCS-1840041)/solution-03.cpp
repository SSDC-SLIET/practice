#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n][n];
	    int sum=0,add=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	            if(i==j)
	            {
	                sum+=a[i][j];
	            }
	            if((i+j)==(n-1))
	            {
	                add+=a[i][j];
	            }
	        }
	    }
	    if(sum>add)
	    {
	        cout<<(sum-add)<<endl;
	    }
	    else
	    cout<<(add-sum)<<endl;
	}
	return 0;
}
