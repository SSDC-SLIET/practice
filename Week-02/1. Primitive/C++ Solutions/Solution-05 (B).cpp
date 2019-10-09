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
            
         for(int k=0;k<c;k++)
            cout<<s[c-k-1];
         cout<<endl;
     }
	return 0;
}
