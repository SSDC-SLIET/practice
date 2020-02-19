#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long long arr[n];
        for(long i=0;i<n;i++)
          cin>>arr[i];
        long long motu = arr[0];
        long long patlu = arr[n-1];
        int count1=1;
        for(int i=1,j=n-1;i<j; )
        {
            if(motu <= 2*patlu)
            {
                motu += arr[i++];
                count1++;
            }
            else
            {
                patlu += arr[--j];
            }
        }
        int count2 = n - count1;
        cout<<count1<<" "<<count2<<endl;
        if(count1>count2)
          cout<<"Motu"<<endl;
        else if(count1<count2)
          cout<<"Patlu"<<endl;
        else
          cout<<"Tie"<<endl;
    }
    return 0;
}
