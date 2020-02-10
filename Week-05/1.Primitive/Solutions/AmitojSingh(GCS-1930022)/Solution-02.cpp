#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int flag=0;
	    for(i=1;i<n/2;i++){
	        if(3*i+3==n){
	            flag=i;
	            break;
	        }
	    }
	    if(flag){
	        cout<<i<<" "<<i+1<<" "<<i+2<<endl;
	    }else{
	        cout<<-1<<"\n";
	    }
	}
	return 0;
}
