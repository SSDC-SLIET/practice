#include<iostream>
using namespace std;
int main()
{
	int t,N;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
	    cin>>N;
	    int a[N];
	    for(int i=0;i<N;i++)
	    cin>>a[i];
	    int max=a[0];
	    for(int i=1;i<N;i++)
	    {
	        if(a[i]>max)
	        max=a[i];
	    }
	    int min=a[0];
	    for(int i=1;i<N;i++)
	    {
	        if(a[i]<min)
	        min=a[i];
	    }
	    cout<<max<<" ";
	   cout<<min<<endl;
	}
	return 0;
}
