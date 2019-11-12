#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t,m,n,a,b,k;
	cin >> t;
	
	while(t--)
	{
	    cin >> n >> m;
	    vector<int> v(n); 
	    
	    for(int i=0 ; i<m ; i++)
	    {
	        cin >> a >> b >> k;
	        for(int j=a ; j<=b ; j++)
	           v[j] += k;
	    }
	    
	   cout << *max_element(v.begin(),v.end()) << endl; 
	}
	return 0;
}
