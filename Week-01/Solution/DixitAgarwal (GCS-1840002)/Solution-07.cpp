#include <iostream>
using namespace std;

int main() {
    int t,n,temp;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int a[n][n];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                cin>>a[j][k];
            }
        }
        for(int k=0;k<n;k++)
        {
            for(int j=n-1;j>=0;j--)
            {
            cout<<a[j][k]<<" ";
            }
        }
        cout<<endl;
    }
	//code
	return 0;
}
