#include<iostream>
using namespace std;
int counter();
int main()
 {
	int t,N;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
	    int i,j,K;
	    cin>>N>>K;
	    int a[N];
	    for(i=0;i<N;i++)
	    cin>>a[i];
	   
	   	    int count=0;
	    for(i=0;i<N;i++)
	     {
	         for(j=i+1;j<N;j++)
	          { if((a[i]+a[j])==K)
	             count++;}
	     }
	          cout<<count<<endl;
	          
	}
	return 0;
 }
