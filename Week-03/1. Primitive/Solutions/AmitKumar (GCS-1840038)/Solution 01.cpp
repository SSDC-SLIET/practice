#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
      int n;
      cin>>n; 
      int x=1;
      for(int i=1; i<=n; i++)
        {
          cout<<x;
          x=x*(n-i)/i;
        }
      cout<<endl;
	}
    return 0;
}
