#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s;
        int n;
        cin>>s;
        n=s.size();
        for(int j=n-1;j>=0;j--)
        cout<<s[j];
        cout<<endl;
    }
	//code
	return 0;
}
