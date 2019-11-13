#include <bits/stdc++.h>

using namespace std;


int main()
{

    int ar_count,sum=0;
    cin >> ar_count;
    int a[ar_count];
    for(int i=0;i<ar_count;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<ar_count;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    return 0;
}
