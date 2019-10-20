#include <iostream>
using namespace std;

int main() {
	//code
	int T,i,n,k;
	cin>>T;
	for(i=1;i<=T;i++)
	{
	    int x=1;
	    cin>>n;
	     for (int k = 0; k < n; k++)
        {
          cout <<x<<" ";
          x = x * (n - k-1) / (k + 1);
        }
	  cout<<endl;
	}
	return 0;
}
