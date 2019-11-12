#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t,cnt,n,k;
    
    cin >> t;
    
    while(t--)
    {
        cnt = 0;
        cin >> n >> k ;
        vector<int> v(n);
        
        for(int i=0 ; i<n; i++)
           cin >> v[i];
           
        for(int i=0 ; i<n ; i++)
           for(int j=i+1 ; j<n ; j++)
              if(v[j]%v[i]==k || v[i]%v[j]==k)
                 cnt++;
    
        cout << cnt << endl;             
    }
    
	return 0;
}
