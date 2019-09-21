#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	  string s;
	  getline(cin,s);
	  reverse(begin(s),end(s));
	  int l;
	  l=s.size();
	  for(int i=0; i<l; i++)
	    cout<<s[i];
	  cout<<endl;
	}
	return 0;
}
