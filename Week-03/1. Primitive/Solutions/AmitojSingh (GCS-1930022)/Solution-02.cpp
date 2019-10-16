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
    int ten=1,r;
    int sum=0;
    while(n){
        r=n%10;
        if(r==0){
            sum=sum+5*ten;
        }else{
            sum=sum+r*ten;
        }
        ten*=10;
        n/=10;
    }
    return sum;


}
