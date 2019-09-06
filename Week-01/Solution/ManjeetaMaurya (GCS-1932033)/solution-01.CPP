
#include <iostream>
using namespace std;

int main() {
	int A[1000000],B[100000],N1,N2,t,i,min,max;
	cin>>t;
	
	for(int j=0;j<t;j++)
	{    cin>>N1;
	    for(i=0;i<N1;i++)
	    cin>>A[i];
	    cin>>N2;
	    for(i=0;i<N2;i++)
	   { cin>>B[i];
	       
	   }
	    max=A[0];
	    for(i=0;i<N1;i++)
	    {
	        if(max<A[i])
	         max=A[i];
	        
	    }
	    min=B[0];
	    for(i=0;i<N2;i++)
	    {
	        if(min>B[i])
	        min=B[i];
	        
	    }
	    
	    cout<<min*max<<endl;
	    
	   
	    
	}
	
	return 0;
}
