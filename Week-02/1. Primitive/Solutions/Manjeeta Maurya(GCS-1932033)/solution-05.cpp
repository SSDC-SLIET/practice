#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    string a;
	    cin>>a;
	    int n=a.size();
	     for(int j=n-1;j>=0;j--)
	    {
	        cout<<a[j];
	        
	    }
	    
	    cout<<endl;
	    
	    t--;
	}
	return 0;
}
