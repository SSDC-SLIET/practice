#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long ar[n];
        for(long i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(n%2 == 0)
        {
            for(int i=0;i<n/2;i++)
              cout<<ar[n-1-i]<<" "<<ar[i]<<" ";
        }
        else
        {
            for(int i=0;i<n/2;i++)
              cout<<ar[n-1-i]<<" "<<ar[i]<<" ";
            cout<<ar[n/2]<<" ";  
        }
        cout<<endl;
    }
    return 0;
}
