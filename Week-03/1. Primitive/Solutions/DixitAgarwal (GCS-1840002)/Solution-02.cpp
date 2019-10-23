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
    int r,num=0;
    for(int i=0;n!=0;i++)
    {
        r=n%10;
        if(r==0)
        {
            r=5;
        }
        num+=r*(pow(10,i));
        n=n/10;
    }
    return num;
//Your code here
}
