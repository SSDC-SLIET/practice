#include <iostream>
using namespace std;

int main() {
    int t,temp,i,j,k,n;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        int a[n][n],b[n][n];
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                cin>>a[j][k];
            }
        }for(j=0;j<n;j++){
            for(k=n-1;k>=0;k--){
                cout<<a[k][j]<<" ";}}
               

       cout<<"\n"; 
    }
	//code
	return 0;
}
