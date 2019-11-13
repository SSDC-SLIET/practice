#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
  {
	long int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	   cin>>arr[i];
    sort(arr,arr+n);

	int max_product=arr[n-1]*arr[n-2];
	cout<<max_product<<endl;
  }
 return 0;
}
