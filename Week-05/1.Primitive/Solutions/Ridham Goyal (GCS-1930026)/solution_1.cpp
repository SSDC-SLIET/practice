#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t){
	    int num1,num2,sum=0;
	    cin>>num1>>num2;
	    sum=num1+num2;
	    cout<<sum%12<<"\n";
	    
	    t--;
	}
	return 0;
}
