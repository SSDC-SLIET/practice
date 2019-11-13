#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
          {
              cin>>a[i];
          }	    
          int b[2]={0};
          for(int i=0;i<n;i++)
          {
              b[a[i]]++;
          }
          cout<<b[0]<<endl;
	}
	return 0;
}
