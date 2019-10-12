#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int j=0;j<N;j++)
        cin>>arr[j];
        int max1=0,max2=0;
        for(int j=0;j<N;j++)
        {
            if(arr[j]>max1)
            max1=arr[j];
        }
        for(int j=0;j<N;j++)
        {
            if(max1==arr[j])
            {
                arr[j]=0;
                break;
            }
        }
        for(int j=0;j<N;j++)
        {
            if(arr[j]>max2)
            max2=arr[j];
        }
        cout<<max1*max2<<endl;
    }
	return 0;
}
