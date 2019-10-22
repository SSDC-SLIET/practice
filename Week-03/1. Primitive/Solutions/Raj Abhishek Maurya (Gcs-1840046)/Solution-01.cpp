#include<iostream>
using namespace std;
int main()
 {
     int t,i;
     cin>>t;
     for(i=1;i<=t;i++)
     {
         int n,j,s=1;
         cin>>n;
        for(j=1;j<=n;j++)
         {
             cout<<s<<" ";
             s=s*(n-j)/j;
         }
         cout<<endl;
     }
     return 0;
}
