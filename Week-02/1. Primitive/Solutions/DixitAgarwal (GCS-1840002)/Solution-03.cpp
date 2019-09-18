#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
        for(int j=n-1;j>=0;j--)
        cout<<a[j]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
