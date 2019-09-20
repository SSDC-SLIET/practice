#include <iostream>
#include<string.h>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t){
	    string s;
	    cin>>s;
	    
	    for(int i=s.length()-1;i>=0;i--){
	        cout<<s[i];
	    }
	    //reverse(s.begin(), s.end());
	    cout<<endl;
	    t--;
	}
	return 0;
}
