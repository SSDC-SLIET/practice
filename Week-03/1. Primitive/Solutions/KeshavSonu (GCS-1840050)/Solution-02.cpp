#include<bits/stdc++.h>
using namespace std;
int convertFive(int n);
 
// Driver program to test above function
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
    if(n==0)
    return 0;
    
    int dig=n%10;
    if(dig==0)
    dig=5;
    return convertFive(n/10)*10+dig;
}
