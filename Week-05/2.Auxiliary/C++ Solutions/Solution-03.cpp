#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%5!=0)
          cout<<n%5;
        else
           cout<<-1;
        cout<<endl;   
    }
    return 0; 
}
