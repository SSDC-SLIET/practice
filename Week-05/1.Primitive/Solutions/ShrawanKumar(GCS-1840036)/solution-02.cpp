#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%3 == 0)
        {
            int x = n/3;
            cout<<x-1<<" "<<x<<" "<<x+1;
        }
        else
            cout<<"-1";
        cout<<endl;    
    }
    return 0;
}
