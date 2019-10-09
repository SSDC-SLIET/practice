#include<bits/stdc++.h>

using namespace std;

int convertFive(int n);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
    return 0;
}

int convertFive(int n)
{
    int r,m,ans=0,i=0;
    m=n;
    while(n)
    {
        r=n%10;
        if(r==0)
            ans += 5*pow(10,i);
        n=n/10;
        i++;
    }
    return m+ans;
}