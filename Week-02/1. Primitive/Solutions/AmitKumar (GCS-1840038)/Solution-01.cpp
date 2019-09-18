#include<iostream>
using namespace std;
int main()
 {
	int T,i;
	long int a,b;
	cin>>T;
	for(i=0; i<T; i++){
	    cin>>a>>b;
	    long int x=b;
	    b=a;
	    a=x;
	    cout<<a<<" "<<b;
	    cout<<endl;
	}
	return 0;
}
