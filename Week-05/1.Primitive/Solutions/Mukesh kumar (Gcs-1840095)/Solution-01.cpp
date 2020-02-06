#include<iostream>
using namespace std;
int main()
 {
	//code
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
      int num1,num2,j,sum;
      cin>>num1>>num2;
     sum=num1+num2;
     cout<<(sum%12)<<endl;
  }
	return 0;
}
