#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         long n;
         cin>>n;
         int a[n];
         for(int j=0;j<n;j++)
          cin>>a[j];
         sort(a,a+n);
         cout<<a[n-1]*a[n-2];
         cout<<endl;
     }
	return 0;
}
