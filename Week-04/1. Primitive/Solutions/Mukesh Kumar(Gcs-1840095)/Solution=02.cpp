#include<iostream>
using namespace std;
int main()
 {
	//code
   int t;
   cin>>t;
   for(int k=1;k<=t;k++)
   {
       int i,j,n,z=0,m;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
       cin>>a[i];
       m=n/2;
       int sum=0,sum1=0;
       for(i=0;i<m;i++)
       sum=sum+a[i];
       for(j=m;j<n;j++)
       sum1=sum1+a[j];
       z=sum*sum1;
       cout<<z<<endl;
   }
	return 0;
}
