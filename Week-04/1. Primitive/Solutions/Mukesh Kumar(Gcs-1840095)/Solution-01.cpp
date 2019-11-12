#include<iostream>

using namespace std;
int main()
{
  int i,n;
  cin>>n;
  int ar[n];
  for(i=0;i<n;i++)
    cin>>ar[i];
  int sum=0;
  for(i=0;i<n;i++)
   {
    sum=sum+ar[i];
   }
cout<<sum;
cout<<endl;
}
