#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    ull cases;
    cin >> cases;
    while(cases--){
        int res=INT_MAX,sum=0;
        string s;
        cin >> s;
      
        vector<int> v(26,0);
        for(int i=0 ; i<s.size() ;i++)
            v[s[i]-'A']++;
      
        sort(v.begin(),v.end(),greater<int>());
        for(int i=1 ; i<=26 ; i++){
            if(s.size()%i!=0) continue;
            int cnt=0,k,n=s.size()/i;
            for(k=0 ; k<i ; k++){ if(v[k]>n){ cnt+=v[k]-n ; }}
            for(k=i; k<26 ; k++) {cnt+=v[k];}
            res=min(res,cnt);
        }
        cout << res << endl;
    } 
	return 0;
}
