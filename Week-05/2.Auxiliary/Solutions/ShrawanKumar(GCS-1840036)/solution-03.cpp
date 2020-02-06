#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%5 != 0)
          cout<<n%5;
        else
           cout<<-1;
        cout<<endl;   
    }
    return 0;
}
