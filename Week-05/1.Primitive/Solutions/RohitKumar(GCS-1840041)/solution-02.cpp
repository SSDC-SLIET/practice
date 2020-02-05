#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int i,sum=0;
        i=1;
        int n;
        cin>>n;
        while(sum<=n)
        {i++;
         sum=i+i+1+i+2;
         if(sum==n)
         {
         cout<<i<<" "<<i+1<<" "<<i+2<<endl;
         break;
         }
        }
        if(sum>n)
        cout<<"-1"<<endl;
        
    }
	//code
	return 0;
}
