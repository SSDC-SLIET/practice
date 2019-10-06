#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,max,min;
	    cin>>n;
	    int a[n];
	    for(int k=0;k<n;k++)
	    cin>>a[k];
	    min=a[0];max=a[0];
	    for(int j=1;j<n;j++)
	    {
	        if(min>a[j])
	        min=a[j];
	        if(max<a[j])
	        max=a[j];
	    }
	    cout<<max<<" "<<min<<endl;
	}
	return 0;
}
