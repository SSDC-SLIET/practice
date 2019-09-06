#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	 long int N1,N2;
	 
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N1;
	    int A[N1];
	    
	    for(int i=0;i<N1;i++)
	    {
	    cin>>A[i];
	    }
	    cin>>N2;
	    int B[N2];
	    for(int i=0;i<N2;i++)
	    {
	    cin>>B[i];
	    }
	     long int  max=A[0],min=B[0];
	    int j;
	    for(j=0;j<N1;j++)
	    {
	    if(max<A[j])
	     {
	         max=A[j];
	         
	     }
	    }
	    for(j=0;j<N2;j++)
	     {if(min>B[j])
	     {
	     min=B[j];
	     }
	     }
	     cout<<(max*min)<<endl;
	     
	   
	}
	return 0;
}
