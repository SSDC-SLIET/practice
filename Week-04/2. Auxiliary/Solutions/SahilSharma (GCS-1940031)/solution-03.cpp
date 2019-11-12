#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t,n,m;
    
    cin >> t;
    
    while(t--)
    {
        cin >> n >> m;
        vector<vector<int>> dp(n+1, vector<int> (m+1));
        
        dp[n][m] = 1;
        
        for(int i=n ; i>=0 ; i--)
           for(int j=m ; j>=0 ; j--)
              {
                if(j==m && i==n)
                    continue;
                else if(j==m)
                    dp[i][j] += dp[i+1][j];
                else if(i==n)  
                    dp[i][j] += dp[i][j+1];
                else    
                    dp[i][j] +=  dp[i+1][j] + dp[i][j+1];
              }
              
        cout << dp[0][0] << endl;
    }
    
	return 0;
}
