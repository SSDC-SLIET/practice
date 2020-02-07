#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t){
	    int n,i;
	    cin>>n;
	    if(n<6){
	        cout<<"-1\n";
	    }
	    else if(n%3!=0){
	        cout<<"-1\n";
	    }
	    else if(n%3==0){
	        for(i=1;i<n;i++){
	            if(((i-1)+(i)+(i+1))==n){
	                cout<<i-1<<" "<<i<<" "<<i+1<<"\n";
	                break;
	            }
	            
	        }
	        
	    }
	    
	    t--;
	}
	return 0;
}
