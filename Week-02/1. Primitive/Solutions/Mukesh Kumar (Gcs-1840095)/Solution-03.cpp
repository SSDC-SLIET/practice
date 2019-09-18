#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,T;
    cin>>T;
    for(j=1;j<=T;j++)
    {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     for(int i=n-1;i>=0;i--)
     cout<<a[i]<<" ";
     cout<<endl;
    }
    return 0;
}
