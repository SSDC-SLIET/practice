#include <iostream>
using namespace std;

int main() 
{
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N,D,*c,*p;
	    cin>>N>>D;
	    c=new int[N];
	    p=new int[N];
	    for(int j=0;j<N;j++)
	    cin>>c[j];
	    for(int j=0;j<N;j++)
	    cin>>p[j];
	    int fine=0;
	    for(int k=0;k<N;k++)
	    {
	        if(D%2==0 && c[k]%2!=0)
	            fine+=p[k];
	        if(D%2!=0 && c[k]%2==0)
	            fine+=p[k];
	     }
	  cout<<fine<<endl;
	 }
	return 0;
}
