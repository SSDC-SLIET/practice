#include<iostream>
using namespace std;
int main()
 {
	//code
	int t, h1, l2, a1[1000000], a2[1000000],n1,n2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n1;
	    for(int j=0;j<n1;j++)
	    {
	        cin>>a1[j];
	    }
	    cin>>n2;
	    for(int j=0;j<n2;j++)
	    {
	        cin>>a2[j];
	    }
	    h1=a1[0];
	    l2=a2[0];
	    for(int j=1;j<n1;j++)
	    {
	       if(a1[j]>h1)
	       h1=a1[j];
	       
	    }
	    for(int j=1;j<n2;j++)
	    {
	       if(a2[j]<l2)
	       l2=a2[j];
	    }
	   cout<<h1*l2<<endl; 
	}
	return 0;
}
