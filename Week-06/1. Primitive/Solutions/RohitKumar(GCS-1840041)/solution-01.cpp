#include <iostream>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]>='a'&&s[i]<='z')
	        
	            s[i]=s[i]-32;
	    }
	    for(int i=0;i<s.size();i++)
	    {
	        cout<<s[i];
	    }
	    cout<<endl;
	}
	return 0;
}

