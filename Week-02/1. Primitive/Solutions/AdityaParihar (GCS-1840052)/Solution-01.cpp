#include <iostream>
using namespace std;

int main() {
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<a<<" "<<b<<endl;
    }
	//code
	return 0;
