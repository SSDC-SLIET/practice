#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    char s[50];
	    cin>>s;
	    for(int i =0;i<strlen(s);i++)
	        cout<<char(toupper(s[i]));
	    cout<<endl;
	}
	return 0;
}
