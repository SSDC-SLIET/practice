#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t!=0){
        int n,s1=0,s2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n/2;i++)
        s1+=a[i];
        for(int i=n/2;i<n;i++)
        s2+=a[i];
        cout<<s1*s2<<endl;;
        t--;
    }
	return 0;
}
