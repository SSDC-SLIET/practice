#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,k;
	while(t--){
	    int c=0;
	   cin>>n>>k;
	   int * ar=new int[n];
	   for(int i=0;i<n;i++){
	       cin>>ar[i];
	   }
	   
	   for(int i=0;i<n;i++){
	       for(int j=0;j<n;j++){
	           if(i==j) continue;
	           if(ar[i]%ar[j]==k){
	               c++;
	           }
	           
	       }
	   }
	   
	   cout<<c<<endl;
	   
	}
	return 0;
}
