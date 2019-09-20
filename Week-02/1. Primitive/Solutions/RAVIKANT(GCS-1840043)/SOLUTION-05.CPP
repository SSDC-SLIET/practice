#include <iostream>
#include<string.h>
using namespace std;
void reverse(string s)
{
    int n;
    n=s.length();
    for(int i=n-1;i>=0;i--)
     cout<<s[i];
     cout<<endl;
}

int main() {
	//code
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    string s;
	    cin>>s;
	    reverse(s);
	}
	return 0;
}
