#include <iostream>
using namespace std;

int main() {
      int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,k;
        int count=0;
        int* a;
        cin>>n;
        a=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cin>>k;
        int low=0;
        int high=n-1;
        while(low<high)
        {
            if(a[low]+a[high]==k)
            {
                cout<<a[low]<<" "<<a[high]<<" "<<k<<endl;
                count++;
            }
            (a[low]+a[high] < k)?low++:high--;
        }
        if(count==0)
        cout<<-1<<endl;
    }
	//code
	return 0;
}
