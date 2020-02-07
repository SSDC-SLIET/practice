#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t){
	    unsigned long n;
	    cin>>n;
	    unsigned long a[n],i,st,nd,N;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    nd=n-1;
	    st=0;
	   while(nd>=st){
	       if(nd==st){
	         cout<<a[nd]<<" ";
	         break;
	       }
	       cout<<a[nd]<<" "<<a[st]<<" ";
	        nd--;
	        st++;
	       
	   }
	    cout<<"\n";
	    
	    
	    t--;
	}
	return 0;
}
