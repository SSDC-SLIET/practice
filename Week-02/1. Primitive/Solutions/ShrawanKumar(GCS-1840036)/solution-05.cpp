#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        for(int i=n;i>=0;i--)
          cout<<s[i];
        cout<<endl;  
    }
    return 0;
}
