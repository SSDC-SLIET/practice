#include <iostream>
using namespace std;

int main()
{
    int t,i,j,n;
	//code
	cin>>t;
	for(i=0;i<t;i++)
	{
	   cin>>n;
	   int a[n],b[n];
	   
	   for(j=0;j<n;j++)
	   cin>>a[j];
	   
	   for(j=0;j<n;j++)
	   {
	       b[j]=a[(n-1)-j];
	       cout<<b[j]<<" ";
	   }
	   
	   cout << endl;
	} 
	return 0;
}
