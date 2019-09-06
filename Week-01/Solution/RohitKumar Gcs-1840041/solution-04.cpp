#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        

     long int b[1000]={0};
    for(int j=0;j<n;j++)
    
    {
        b[a[j]]++;
    }
    for(int j=0;j<1000;j++)
    {
        if(b[j]==1)
        {
            cout<<j<<endl;
        }
    }
    }
    
}

