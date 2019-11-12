#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t,n,x;
    
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        for(int i=0 ; i<n ; i++)
           for(int j=0 ; j<n ; j++)
               {
                   cin >> x;
                  
                   if(i==0 || j==0 || i==n-1 || j==n-1)
                    cout << x << " "; 
                  
               }
        cout << endl;       
    }
    
	return 0;
}
