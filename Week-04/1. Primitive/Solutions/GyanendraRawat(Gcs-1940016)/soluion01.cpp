#include<iostream>
using namespace std;
int main ()
{
    int n,i,sum=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
       cin>>ar[i]; 
       sum=sum+ar[i];         
    }
    cout<<sum;
    return 0;
}

