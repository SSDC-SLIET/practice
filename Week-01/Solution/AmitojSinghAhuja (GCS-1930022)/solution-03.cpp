#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,d;
    	cin>>n>>d;
    	int c[n],p[n];
    	
    	for(int i=0;i<n;i++){
    	    cin>>c[i];
    	}
    	for(int i=0;i<n;i++){
    	    cin>>p[i];
    	}
    	int sum=0;
    	if(d%2==0){
    	    for(int i=0;i<n;i++){
    	        if(c[i]%2==1){
    	            sum+=p[i];
    	        }
    	    }
    	}
    	if(d%2==1){
    	    for(int i=0;i<n;i++){
    	        if(c[i]%2==0){
    	            sum+=p[i];
    	        }
    	    }
    	}
    	cout<<sum<<endl;
    }
	return 0;
}
