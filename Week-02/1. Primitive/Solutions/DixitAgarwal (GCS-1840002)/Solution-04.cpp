#include <iostream>
using namespace std;

int main() {
    int t,max,min;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
        max=a[0];
         min=a[0];
        for(int j=0;j<n;j++)
        {
            if(a[j]>=max)
            max=a[j];
            if(a[j]<=min)
            min=a[j];
        }
       
        cout<<max<<" "<<min<<endl;
    }
	//code
	return 0;
}
