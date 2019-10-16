#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     for(int k=1;k<=t;k++)
     {
         int n,i;
         cin>>n;
         int a[n];
         for(i=0;i<n;i++)
         cin>>a[i];
         int max=0,max1=0;
         max=a[0];
         for(i=1;i<n;i++)
         { if(max<a[i])
             max=a[i];}
         for(i=0;i<n;i++)
         {if(max==a[i])
            { a[i]=0;
                break;}}
         max1=a[0];
         for(i=1;i<n;i++)
          {  if(max1<a[i])
              max1=a[i];}
          cout<<max*max1<<endl;
    }
return 0;
}
