#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n,s, count=0;
	    cin>>n;
	    int a[n];
        cin>>s;
	    for( int i=0;i<n;i++)
	     cin>>a[i];
	    
	       for(int i=0;i<n-1;i++)
		   { 
		       for(int j=i+1;j<n;j++)
               { if((a[j]+a[i])==s)
                count++;
               }
		   } 
	 cout<<count<<endl;
	  t--;
      }
      return 0;
 }     
