#include<bits/stdc++.h>

using namespace std;

int main()
 {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         int n,min,max;
         cin>>n;
         int v[n];
         for(int j=0;j<n;j++)
            cin>>v[j];
         sort(v,v+n);
         cout<<v[n-1]<<" "<<v[0]<<"\n";
     }
	return 0;
}
