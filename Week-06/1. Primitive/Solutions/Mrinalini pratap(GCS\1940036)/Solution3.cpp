#include <iostream>
using namespace std;

int main() {
	int i,j,n,m,t,s1,s2;
	int a[50][50];
	cin>>t;
	for(m=0;m<t;m++){
	    s1 = 0; s2 = 0;
	    cin>>n;
	    for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
	            cin>>a[i][j];
	            if(i==j)
	              s1 += a[i][i];
	            if(i+j==n-1)
	              s2 += a[i][j];
	        } }
	    if(s1>s2)
	       cout<<s1-s2<<endl;
	    else
	       cout<<s2-s1<<endl;
	}
	return 0;
}
