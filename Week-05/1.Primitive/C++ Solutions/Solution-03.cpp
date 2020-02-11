#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr1[N],arr2[N];
	    for(int i=0;i<N;i++)
	    cin>>arr1[i];
	    int max=N-1,min=0;
	    for(int i=0;i<N;i++)
	    {
	        if(i%2==0)
	        {
	            arr2[i]=arr1[max];
	            max--;
	        }
	        else
	        {
	            arr2[i]=arr1[min];
	            min++;
	        }
	    }
	    for(int i=0;i<N;i++)
	    cout<<arr2[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
