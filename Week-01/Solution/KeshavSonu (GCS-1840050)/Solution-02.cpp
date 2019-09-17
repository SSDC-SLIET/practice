#include <iostream>
using namespace std;

int main() 
{
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int n,A,B,*p,l=1;
	    cin>>n>>A>>B;
	    p=new int[n];
	    for(int j=0;j<n;j++)
	     cin>>p[j];
	    for(int k=0;k<n;k++)
	    {
	        if(p[k]>=A && p[k]<=B)
	        l++;
	    }
	    if(l==n)
	     cout<<"Yes"<<endl;
	    else
	     cout<<"No"<<endl;
	}
	return 0;
}
