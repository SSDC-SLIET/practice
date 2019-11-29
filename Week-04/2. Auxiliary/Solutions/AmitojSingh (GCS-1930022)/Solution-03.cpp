#include <iostream>
using namespace std;

int main() {
	int t;
	
	cin>>t;
	int n,m;
	while(t--){
	    cin>>n>>m;
        int a[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    a[i][j]=1;
                }else
                    a[i][j]=0;
            }
        }
      
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
        cout<<a[n][m]<<endl;
	}
	return 0;
}
