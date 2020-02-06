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
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
              cin>>arr[i][j];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=0;j--)
              cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
