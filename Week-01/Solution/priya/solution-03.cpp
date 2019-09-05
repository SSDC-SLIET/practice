#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    int n,d,i,sum=0;
	    cin>>n>>d;
	    int c[n],p[n];
	    for(i=0;i<n;i++)
	    cin>>c[i];
	    for(i=0;i<n;i++)
	    cin>>p[i];
	     if(d%2==0)
	     {
	         for(i=0;i<n;i++)
	         {
	           if(c[i]%2!=0)
	             sum=sum+p[i];
	         }
	          cout<<sum<<endl;
	     }
	 else
	         {
	             for(i=0;i<n;i++)
	             {
	                 if(c[i]%2==0)
	                 sum=sum+p[i];
	             }
	             cout<<sum<<endl;
	         }
	}
	return 0;
 }
	             
	         
