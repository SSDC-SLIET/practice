#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t,n;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        vector<int> v(n);
        
        for(int i=0 ; i<n ; i++)
            cin >> v[i];
    
        cout << accumulate(v.begin(),v.begin() + n/2,0) * accumulate(v.begin() + n/2,v.end(),0) << endl;      
    }
	return 0;
}
