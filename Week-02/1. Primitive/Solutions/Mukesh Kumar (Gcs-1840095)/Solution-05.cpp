#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
 int T;
 cin>>T;
 for(int k=1;k<=T;k++)
 {
    string s;
    cin>>s;
    int n=s.length();
    for(int i=n-1;i>=0;i--)
    cout<<s[i];
    cout<<endl;
  }
    return 0;
}
