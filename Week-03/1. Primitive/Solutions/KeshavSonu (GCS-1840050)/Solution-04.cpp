#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N,K;
        cin>>N>>K;
        int arr[N];
        for(int j=0;j<N;j++)
        cin>>arr[j];
        int count=0;
        for(int j=0;j<N;j++)
        {
            int a1=arr[j];
            int l=0;
            while(l<N&&l!=j)
            {
                int a2=arr[l];
                if((a1+a2)==K)
                count++;
                l++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
