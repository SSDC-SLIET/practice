#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    for(int j=0;j<N;j++)
	     cin>>A[j];
	     int mx=A[0],mi=A[0];
	     if(N==1)
	      cout<<mx<<" "<<mi<<endl;
	      else
	        {
	            for(int j=0;j<N;j++)
	            {
	                if(mx<A[j])
	                  mx=A[j];
	                  if(mi>A[j])
	                   mi=A[j];
	                   
	            }
	          cout<<mx<<" "<<mi<<endl;  
	        }
	}
	return 0;
}
