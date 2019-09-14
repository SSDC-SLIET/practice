#include <iostream>
using namespace std;

int main() {
     int i,t;
     cin>>t;
    for(i=0;i<t;i++)
    {
        int n,a[100][100];
        cin>>n;
        for(int j=0;j<n;j++)
        {
            for(int p=0;p<n;p++)
            cin>>a[j][p];
        }
        for(int j=0;j<n;j++)
        {
            for(int p=n-1;p>=0;p--)
            cout<<a[p][j]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}
