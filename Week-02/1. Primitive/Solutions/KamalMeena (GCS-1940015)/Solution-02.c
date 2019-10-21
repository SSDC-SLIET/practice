{
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
}
}
/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete this method*/
int replace(int n)
{

if (n == 0)
return 0;


int digit = n % 10  ;
if (digit == 0)
digit = 5;


return replace(n/10) * 10 + digit;
}
int convertFive( int n)
{
if (n == 0)
return 5;
else
return replace(n);
}
