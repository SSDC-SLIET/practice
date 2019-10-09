#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int c=0;
         string s;
         cin>>s;
         
         for(int j=0;s[j]!='\0';j++)
            c++;
            
         for(int k=0;k<c;k++)
            cout<<s[c-k-1];
         cout<<endl;
     }
	return 0;
}
