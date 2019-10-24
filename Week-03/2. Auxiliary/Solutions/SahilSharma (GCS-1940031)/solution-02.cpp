#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	long cases,n,count;
	cin >> cases;
	while(cases--){
	    count = 0;
	    cin >> n;
	    map<char,int> res;
	    for(long i=0 ; i<n ; i++) {
	        string s;
	        cin >> s;
	        sort(s.begin(),s.end());
	        auto it= std::unique(s.begin(),s.end());
	        for(auto j=s.begin() ; j<it ; j++)
	              res[*j]++;
	         }
	        for(char k='a' ; k<='z' ; k++)
	             if(res[k]==n) count++;
	        cout << count << endl; }
	return 0;
}
