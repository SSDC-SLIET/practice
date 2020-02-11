#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    if(N%3==0)
	    cout<<(N/3)-1<<" "<<(N/3)<<" "<<(N/3)+1<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
