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
int convertFive(int n)
{
//Your code here
int r,j=1,sum=0;
while(n!=0)
{
 r=n%10;
 n=n/10;
 if(r==0)
 r=5;
 sum+=r*j;
 j=j*10;
}
return sum;

 }
