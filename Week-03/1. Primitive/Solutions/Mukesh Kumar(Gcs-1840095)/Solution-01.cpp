#include<iostream>
using namespace std;
int main()
 {
     int t,i;
     cin>>t;
     for(i=1;i<=t;i++)
     {
         int n,k,p;
         cin>>n;
           p=1;
        for(k=1;k<=n;k++)
         {
             cout<<p<<" ";
             p=p*(n-k)/k;
         }
         cout<<endl;
     }
     return 0;
}
