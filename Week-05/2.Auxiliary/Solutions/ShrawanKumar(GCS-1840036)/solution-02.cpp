#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binary(long arr[],long n,long m,int min,ll max){
    
    if(m>n)
      return -1;
    if(min<max)
    {
        int x=0,sum=0,count=1;
        ll val = (min+max)/2;
        for(long i=0;i<n;i++)
        {
            if(sum+arr[i]<=val)
            {
                sum += arr[i];
            }
            else if(arr[i]<=val && count <m)
            {
                count++;
                sum=0;
                sum += arr[i];
            }
            else
            {
                x = 2;
                break;
            }
        }
        if(x==2)
         return binary(arr,n,m,val+1,max);
        else if(x==0)
         return binary(arr,n,m,min,val);
        else
         return min;
    }
}


int main()
{
    int t,min=-1;
    ll max=0;
    cin>>t;
    while(t--)
    {
        long n,m;
        cin>>n;
        long arr[n];
        for(long i=0;i<n;i++){
            cin>>arr[i];
            max += arr[i];
        }
        cin>>m;
        cout<<binary(arr,n,m,min,max);
        cout<<endl;
    }
    return 0;
}
