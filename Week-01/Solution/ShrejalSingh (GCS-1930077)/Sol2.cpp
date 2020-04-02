#include <iostream>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	int n,a,b,l=0,j,i;
	cin>>n;
	cin>>a>>b;
	int ar[n];
	for(i=0;i<n;i++)
	{
	cin>>ar[i];
	}
    for(i=a;i<=b;i++)
    {
     for(j=0;j<n;j++)
     {
     if(ar[j]==i)
     l++;
     }
    }
   int r=b-a+1;
    if(l==r)
       cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
	}
	return 0;
 }
