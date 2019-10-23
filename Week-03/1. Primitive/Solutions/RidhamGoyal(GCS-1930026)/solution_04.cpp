#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t){
		unsigned long long n,i,j,k=0,count=0;
		cin>>n>>k;
		unsigned long long a[n];
		
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]+a[j]==k)
				    count++;
			}
		}
		cout<<count<<endl;
		
		t--;
	}	
}
