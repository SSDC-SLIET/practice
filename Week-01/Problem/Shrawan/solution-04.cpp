#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int i,t;
     cin>>t;
     for(i=1;i<=t;i++)
     {
         int n,j;
         cin>>n;
         int a[n];
         for(j=0;j<n;j++)
         cin>>a[j];
         
         for(j=0;j<n;j=j+2)
         if(a[j] != a[j+1])
         {
             cout<<a[j]<<endl;
             break;
         }
     }
	return 0;
}
