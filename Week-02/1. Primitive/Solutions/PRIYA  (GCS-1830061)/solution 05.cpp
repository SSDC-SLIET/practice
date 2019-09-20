#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    char s[40];
	    int l,i;
	    cin>>s;
	    l=strlen(s);
	    for(i=l-1;i>=0;i--)
	    {
	      cout<<s[i];
	    }
	    cout<<endl;
	    
	}
	return 0;
}
