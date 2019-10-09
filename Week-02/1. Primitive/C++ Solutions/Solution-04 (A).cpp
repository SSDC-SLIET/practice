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
         vector <int> v(n);
         for(int j=0;j<n;j++)
            cin>>v[j];
         min=max=v[0];
         for(int j=0;j<n;j++)
         {
             if(min>v[j])
                min=v[j];
             if(max<v[j])
                max=v[j];
         }
         cout<<max<<" "<<min<<"\n";
     }
	return 0;
}