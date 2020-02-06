#include<iostream>
using namespace std;
int main()
 {
     int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n,sum=0,i;
	    cin>>n;
	 
	    for(i=0;i<n;i++)
	    {    
	        sum=i+i+1+i+2;
	        if(sum==n)
	       { cout<<i<<" "<<i+1<<" "<<i+2<<" "<<endl;
	        break;
	       }
	    }
	        if(sum>n || sum<n)
	         cout<<"-1"<<endl;
    }
	return 0;
}
