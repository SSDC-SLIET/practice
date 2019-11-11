#include<iostream>
using namespace std;
int main()
 {
     int t,n,k;
     cin>>t;
     for(int r=0;r<t;r++)
     {
         int x=0;
        cin>>n>>k;
        int a[n];
        for(int j=0;j<n;j++)
          cin>>a[j];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
              if(a[i]+a[j]==k)
                x=x+1;
        }
        cout<<x<<endl;
     }
     return 0;
}
