#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	  int i,n,sum1=0,sum2=0;
	  int d;
	  cin>>n;
	  int c;
	  c=n/2;
	  int a[n];
	  for(i=0;i<n;i++)
	  {
	      cin>>a[i];
	  }
	  for(i=0;i<c;i++)
	  {
	      sum1+=a[i];
	  }
	  for(i=c;i<n;i++)
	  {
	      sum2+=a[i];
	  }
	  d=sum1*sum2;
	  cout<<d<<endl;
	  
	}
	return 0;
}
