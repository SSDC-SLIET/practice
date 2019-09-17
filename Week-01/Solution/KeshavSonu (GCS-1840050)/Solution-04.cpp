#include <iostream>
using namespace std;

int main() 
{
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int s,*arr;
	    cin>>s;
	    arr=new int[s];
	    for(int j=0;j<s;j++)
	    cin>>arr[j];
	    for(int k=0;k<s;)
	    {
	        if(arr[k]!=arr[k+1])
	        {
	            cout<<arr[k]<<endl;
	            break;
	        }
	        k=k+2;
	    }
	}
	return 0;
}
