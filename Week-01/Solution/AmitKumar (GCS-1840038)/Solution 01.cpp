#include<iostream>
using namespace std;
int main()
 {
	long int t,i,j;
	cin>>t;
	for(j=0; j<t; j++)
	{
	    long int n1;
	    cin>>n1;
	    long int a[n1];
	    for(i=0; i<n1; i++)
	     cin>>a[i];
	     
	    long int n2;
	    cin>>n2;
	    long int b[n2];
	    for(i=0; i<n2; i++)
	     cin>>b[i];
	     
	    long int max=a[0];
	    for(i=0; i<n1; i++){
	        if(a[i]>max)
	         max=a[i];
	      }
	    
	    long int min=b[0];
	    for(i=0; i<n2; i++){
	        if(min>b[i])
	         min=b[i];
	      }
	    cout<<(max*min)<<endl;
	}
	return 0;
}
