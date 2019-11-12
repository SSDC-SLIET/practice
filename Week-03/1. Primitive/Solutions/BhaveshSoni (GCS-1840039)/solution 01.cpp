#include<iostream>
using namespace std;
int main()
 {
     int t,i;
     cin>>t;
     for(i=1;i<=t;i++)
     {
         int k,j,a=1;
         cin>>k;
         for(j=1;j<=k;j++)
         {
             cout<<a<<" ";
             a=a*(k-j)/j;
         }
         cout<<endl;
     }
	//code
	return 0;
}
