#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        long long int n,n1,max,min;
         cin>>n;
        long long int a[n];
         for(int i=0;i<n;i++)
         {
            cin>>a[i];
         }
         cin>>n1;
        long long int b[n1];
         for(int i=0;i<n1;i++)
         {
            cin>>b[i];
         }
        max=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        min=b[0];
        for(int i=0;i<n1;i++)
        {
            if(b[i]<min)
            {
                min=b[i];
            }
        }
        cout<<max*min<<endl;
     }
	return 0;
}
