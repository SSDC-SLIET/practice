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
        {
            cin>>a[j];
        }
        int b[1017]={0};
        for(int j=0;j<n;j++)
        {
            b[a[j]]++;
        }
        for(int j=0;j<1017;j++)
        {
            if(b[j]==1)
            cout<<j<<endl;
        }
    }
	//code
	return 0;
}
