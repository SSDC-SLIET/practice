#include<iostream>
using namespace std;
int main()
 {
	int T,i;
	cin>>T;
	for(i=1;i<=T;i++)
	{
	   long int N,j;
	   cin>>N;
	   long int a[N];
	   for(j=0;j<N;j++)
	     cin>>a[j];
	    for(j=0;j<N;j=j+2)
	      if(a[j]!=a[j+1])
	      {
	          cout<<a[j]<<endl;
	          break;
	      }
	    }
	return 0;
 }
