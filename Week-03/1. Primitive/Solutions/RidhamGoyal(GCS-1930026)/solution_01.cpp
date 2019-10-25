#include<iostream>
using namespace std;

int main(){

	int t;
	cin>>t;
	int i,a[25][25],j,count=2;

	a[0][0]=1;
	a[1][0]=1;
	a[1][1]=1;
	for(i=2;i<25;i++){
		a[i][0]=1;
		a[i][i]=1;
		
		for(j=1;j<count;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		count++;
	}
	while(t){
	int n;
	cin>>n;
		for(j=0;j<n;j++){
			cout<<a[n-1][j]<<" ";
		}
		cout<<endl;
		t--;
	}
}
