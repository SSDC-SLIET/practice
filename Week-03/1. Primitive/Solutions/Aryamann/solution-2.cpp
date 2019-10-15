#include<iostream>
using namespace std;
static int x=0;

int convert0to5(int num){
	if(num==0){
		return 5;
	}
	else{
		int digit=num%10;
		if(digit==0){
		digit=5;
	}
	convert0to5(num/10);
x=x*10+digit;	
}
return x;
}

int main(){
	int num;
	cin>>num;
	cout<<convert0to5(num);
	return 0;
}
