#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int n,v,a,b;
	    
	while(t--){
	    cin>>n;
	    int ar[n];
	    int mx=-1;
	    int secmx=-1;
	    for(int i=0;i<n;i++){
	        cin>>v;
	        if(v>mx) mx=v;
	        ar[i]=v;
	    }
	    int flag=1;
	    for(int i=0;i<n;i++){
	        if(flag==1 && ar[i]==mx){
	            ar[i]=-1;
	            flag=0;
	        }
	        if(ar[i]>secmx && ar[i]<=mx) secmx=ar[i];
	    }
	    cout<<mx*secmx<<endl;
	    
	}
	
	
	
	return 0;
}
