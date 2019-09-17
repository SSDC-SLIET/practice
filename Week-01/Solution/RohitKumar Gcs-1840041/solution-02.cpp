#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,x,b;
	    cin>>n>>x>>b;
	    int a[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	    }
	    int m=0;
	    for(int j=x;j<=b;j++)
	    {
	        for(int y=0;y<n;y++)
	        {
	            if(a[y]==j)
	            {
	                
	                m+=1;
	                break;
	            }
	        }
	    }
	    int c;
	    c=(b-x+1);
	    if(m==c)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
