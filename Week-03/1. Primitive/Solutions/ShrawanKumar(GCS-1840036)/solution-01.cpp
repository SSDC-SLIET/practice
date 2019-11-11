#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     for(int j=0;j<t;j++)
     {
         cin>>n;
         int p=1;
        for(int i=1;i<=n;i++)
         {
             cout<<p<<" ";
             p=p*(n-i)/i;
         }
         cout<<endl;
     }
 }     
     
     
