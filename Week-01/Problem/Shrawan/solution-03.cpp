#include<iostream>
using namespace std;
int main()
 {
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	   long int n;
	   int d,j; 
	   cin>>n;
	   cin>>d;
	   int c[n],p[n];
	   for(j=0;j<n;j++)
	   cin>>c[j];
	   for(j=0;j<n;j++)
	   cin>>p[j];
	   
	   int sum=0;
	   for(j=0;j<n;j++)
	   {
	       if(d%2==0 && c[j]%2 != 0)
	       sum=sum+p[j];
	       else if(d%2 != 0 && c[j]%2 == 0)
	       sum=sum+p[j];
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
