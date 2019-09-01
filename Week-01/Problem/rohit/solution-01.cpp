#include <iostream>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x,y;
	    cin>>x;
	    long int a[x];
	    for(int j=0;j<x;j++)
	    {
	        cin>>a[j];
	    }
	    int max=0;
	    max=a[0];
	    for(int j=1;j<x;j++)
	    {
	        if(a[i]>max)
	        {
	            max=a[i];
	        }
	    }
	    cin>>y;
	    long int b[y];
	    for(int j=0;j<y;j++)
	    {
	        cin>>b[j];
	    }
	    int min=0;
	    min=b[0];
	    for(int j=1;j<y;j++)
	    {
	        if(b[j]<min)
	        {
	            min=b[j];
	        }
	    }
	    long int g;
	    g=(max*min);
	    cout<<g;
	    cout<<endl;
	}
	return 0;
}
