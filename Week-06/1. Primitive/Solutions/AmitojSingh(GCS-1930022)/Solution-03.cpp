#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sums1=0,sums2=0;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	            if(i==j){
	                sums1+=a[i][j];
	            }
	            if(i==n-1-j){
	                sums2+=a[i][j];
	            }
	        }
	    }
	    
	    cout<<abs(sums1-sums2)<<endl;
	    
	}
	return 0;
}
