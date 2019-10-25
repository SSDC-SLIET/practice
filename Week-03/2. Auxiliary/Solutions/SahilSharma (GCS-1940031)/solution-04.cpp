#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
typedef unsigned long long ull;
typedef long long int lli;
using namespace std;

ull inv(ull num)
{ 
    ull ans;
    lli m=mod;
    lli y=0,x=1;
    while(num>1)
    {
        lli q=num/m;
        lli t=m;
        m=num%m,num=t;
        t=y;
        y=x-q*y;
        x=t;
    }
    if(x<0) x+=mod; 
    ans=x;
    return ans;   
}

ull power(ull index,ull raize)
{
    ull res=1;
    while(raize>0) {
        if(raize%2==1)
           res=(res*index)%mod;
          
          raize=raize/2;
          index=(index*index)%mod;
    }
    return res;
}
int main()
{
    ull t,n,k,m,ans;
    cin >> t;
    while(t--) {
        cin >> n >> k >> m;
        if(m%2==1)
        {
            ans=(1-(power(n-1,(m+1)/2)*power(inv(n),(m+1)/2))%mod+2*mod)%mod;
            cout << ans << endl;
        }
        else
        {
            ans=(1-(((((power(n-1,m/2)*power(inv(n),m/2))%mod)*(n+k-1))%mod)*inv(n+k))%mod + 2*mod)%mod;
            cout << ans << endl;
        }
    }

	return 0;
}
