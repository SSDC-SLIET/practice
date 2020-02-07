#include <bits/stdc++.h>
using namespace std;

int main() {
     {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    if(n<=4){
	        cout<<n<<endl;
	    }
	    int flag=0;
	  
	    if(n>4){
	        for(int i=1; i<=4; i++){
	            if((n-i)%5==0){
	                cout<<i<<endl;
	                flag=1;
	                break;
	            }
	            
	        }
	        if(flag==0){
	            cout<<-1<<endl;
	        }
	        
	    }
	}
	return 0;
}
