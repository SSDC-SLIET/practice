#include <iostream>
using namespace std;

int main() {
    int t,n,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==k)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
	//code
	return 0;
}
