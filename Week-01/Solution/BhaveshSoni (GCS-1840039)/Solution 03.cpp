#include<iostream>
using namespace std;
int main()
 {
     int d,m;
    int n,j,t;
    cin>>m;
    for(t=1;t<=m;t++)
    {
        int sum=0;
    cin>>n;
     cin>>d;
     int c[n],p[n];
    for(j=0;j<n;j++)
    {
    cin>>c[j];
    }
    for(j=0;j<n;j++)
    {
    cin>>p[j];
    }
    for(j=0;j<n;j++)
    {
        if(d%2==0  && c[j]%2!=0 )
      sum=sum+p[j];
    }
     for(j=0;j<n;j++)
     {
    if(c[j]%2==0  &&  d%2!=0 )
    sum=sum+p[j];
    }
    cout<<sum<<endl;
    }
    return 0;
}
