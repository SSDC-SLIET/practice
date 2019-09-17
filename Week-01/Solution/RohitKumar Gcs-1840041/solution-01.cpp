#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int max=0,min=0;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        for(long j=0;j<n;j++)
        {
            long a;
            if(j==0)
            {
            cin>>a;
            max=a;
            }
            else
            {
                cin>>a;
                if(a > max)
                {
                    max=a;
                }
            }
            
        }
        int x;
        cin>>x;
        for(long j=0;j<x;j++)
        {
            long c;
            if(j==0)
            {
                cin>>c;
             min=c;
            }
            else
            {
                cin>>c;
                if(min > c)
                {
                    min=c;
                }
            }
        }
    
        cout<<min*max<<endl;
    }
}
