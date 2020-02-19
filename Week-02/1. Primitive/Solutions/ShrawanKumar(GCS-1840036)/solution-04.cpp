#include<iostream>
using namespace std;
int main()
 {
  int j,t;
  cin>>t;
  for(j=1;j<=t;j++)
  {
    int i,n,max=0;
    int min=32000;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   cin>>a[i];
   for(i=0;i<n;i++)
   {
       if(max<=a[i])
       max=a[i];
   }
   cout<<max<<" ";
  for(i=0;i<n;i++)
   {
       if(min>=a[i])
       min=a[i];
   }
   cout<<min;
    cout<<"\n";
  }
	return 0;
}
