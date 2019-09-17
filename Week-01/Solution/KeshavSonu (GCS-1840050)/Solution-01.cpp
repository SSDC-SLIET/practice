#include <iostream>
using namespace std;

int main() 
{
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N1,N2,*arr1,*arr2;
	    cin>>N1;
	    arr1=new int[N1];
	    for(int j=0;j<N1;j++)
	    cin>>arr1[j];
	    cin>>N2;
	    arr2=new int[N2];
	    for(int k=0;k<N2;k++)
	    cin>>arr2[k];
	    int max=arr1[0];
	    for(int j=1;j<N1;j++)
	    {
	        if(arr1[j]>max)
	        {max=arr1[j];}
	    }
	    int min=arr2[0];
	    for(int k=1;k<N2;k++)
	    {
	        if(arr2[k]<min)
	        {min=arr2[k];}
	    }
	    cout<<max*min<<endl;
	}
	return 0;
}
