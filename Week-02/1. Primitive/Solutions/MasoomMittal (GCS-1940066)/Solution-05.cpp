#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	//code
	char str[100], temp;
	int i=0, j;
	int t;
	cin>>t;
	for(int m=0;m<t;m++)
	{
	    cin>>str;
	    for(int j=strlen(str)-1;j>=0;j--)
	    {
	        cout<<str[j];
	    }
	    cout<<endl;
	}
	return 0;
}
