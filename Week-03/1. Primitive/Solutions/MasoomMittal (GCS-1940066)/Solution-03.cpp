#include <iostream>
using namespace std;

int main() {
	//code
	int t,n1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n1;
        int a[n1];
        for(int j=0;j<n1;j++)
        {
            cin>>a[j];
        }
        int max=a[0];
        for(int j=0;j<n1;j++)
        {
            if(max<a[j])
            {
                max=a[j];
            }
        }
        for(int j=0;j<n1;j++)
        {
            if(max==a[j])
            {
                a[j]=0;
                break;
            }
        }
        int minn=a[0];
        for (int j= 0;j<n1;j++) 
        { 
        if (a[j]>minn) 
        { 
            minn=a[j];
        }
        }
        cout<<max*minn<<endl;
    }
    return 0;
}
