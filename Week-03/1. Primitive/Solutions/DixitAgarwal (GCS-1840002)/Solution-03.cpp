#include <iostream>
using namespace std;

int main() {
    int t;
    long n,p;
    cin>>t;
    for(long i=1;i<=t;i++)
    {
       cin>>n;
       int a[n];
       for(long i=0;i<n;i++)
       {
           cin>>a[i];
       }
       int max1=a[0];
       for(long i=0;i<n;i++)
       {
           if(a[i]>=max1)
           {
               max1=a[i];
               p=i;
           }
       }
       a[p]=-1;
       int max2=a[0];
       for(int i=0;i<n;i++)
       {
           if(a[i]>=max2)
           {
               max2=a[i];
           }
       }
       cout<<max1*max2<<endl;
    }
	//code
	return 0;
}
