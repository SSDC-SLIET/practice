#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         string s;
         cin>>s;
         int c = s.size();
         //OR YOU CAN USE
         //int c = s.length();
         
         for(int k=c-1;k>=0;k--)
            cout<<s[k];
         cout<<endl;
     }
	return 0;
}
