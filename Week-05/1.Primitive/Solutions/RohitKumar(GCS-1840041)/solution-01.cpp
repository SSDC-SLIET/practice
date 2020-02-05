
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int num1,num2;
	    cin>>num1>>num2;
	    int sum=0;
	    sum=num1+num2;
	    if(sum>=12)
	    {
	        cout<<(sum%12)<<endl;
	    }
	    else
	    cout<<sum<<endl;
	}
	return 0;
}
