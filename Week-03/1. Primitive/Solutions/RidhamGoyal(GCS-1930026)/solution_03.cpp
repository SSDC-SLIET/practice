#include<iostream>
using namespace std;

unsigned long long max1(unsigned long long a[],unsigned long long n){
	unsigned long long i,j,max=0;
	
	for(i=0;i<n;i++){
		if(a[i]>=max){
			max=a[i];
		}
	}
	return max;

}

unsigned long long max2(unsigned long long a[],unsigned long long n){
	unsigned long long i,j,max=max1(a,n),max22;
	
	for(i=0;i<n;i++){
		if(a[i]==max){
			a[i]=0;
			break;
		}
	}
	max22= max1(a,n);
	return max22 ;

}


int main(){
	int t;
	cin>>t;
	while(t){
		unsigned long long n,i,j,pro=0;
		cin>>n;
		unsigned long long a[n];
		
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		pro=max1(a,n) * max2(a,n);
		cout<<pro<<endl;
		
		t--;
	}	
}
