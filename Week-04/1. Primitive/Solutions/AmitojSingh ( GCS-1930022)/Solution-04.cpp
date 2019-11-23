#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	int m,n,a,b,k;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    int *ar=new int[m];
	    for(int i=0;i<m;i++){
	        ar[i]=0;
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>a>>b>>k;
	        for(int j=a;j<=b;j++){
	            ar[j]=ar[j]+k;
	        }
	        
	    }
	    sort(ar,ar+m);
	    cout<<ar[m-1]<<endl;
	    
	    
	}
	return 0;
}
