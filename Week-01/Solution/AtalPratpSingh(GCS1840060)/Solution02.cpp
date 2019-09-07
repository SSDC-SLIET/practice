#include<iostream>
using namespace std;
int main()
 {
	//code
	long int temp=0, count=0, a, b, ar[1000000],t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    count =0;
	    cin>>n>>a>>b;
	     for(int j=0;j<n;j++)
	    {
	        cin>>ar[j];
	    }
	    for(int j=a;j<=b;j++)
	    {
	        temp=0;
	       for(int k=0;k<n;k++)
	    {
	        if(ar[k]==j)
	        temp++;
	       
	    }
	     if(temp>0)
	        count++;
	    }
	 if(count<(b-a+1)) 
	 cout<<"No"<<endl;
	 else
	 cout<<"Yes"<<endl;
	}
	return 0;
}
