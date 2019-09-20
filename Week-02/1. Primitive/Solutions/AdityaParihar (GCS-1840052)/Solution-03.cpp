#include <iostream>
using namespace std;

int main() {
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int* a;
        a=new int[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
        for(int j=n-1;j>=0;j--)
        cout<<a[j]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
