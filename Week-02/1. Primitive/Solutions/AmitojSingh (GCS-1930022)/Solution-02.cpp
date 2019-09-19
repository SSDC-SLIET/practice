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
    int a,c=1;
    int sum=0;
    while(n!=0){
        a=n%10;
        if(a==0){
            sum=sum+5*c;
        }else{
            sum+=a*c;
        }
        c*=10;
        n=n/10;
    }
    return sum;
}
