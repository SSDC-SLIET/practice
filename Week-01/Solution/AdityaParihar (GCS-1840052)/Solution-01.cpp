#include <iostream>
using namespace std;

int main() {
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n1,n2,max,min;
        int* a=NULL;
        int* arr=NULL;
        cin>>n1;
        a=new int[n1];
        for(int j=0;j<n1;j++)
        cin>>a[j];
        max=a[0];
        cin>>n2;
        arr=new int[n2];
        for(int j=0;j<n2;j++)
        cin>>arr[j];
        min=arr[0];
        for(int j=0;j<n1;j++)
        {
            if(a[j]>max)
            max=a[j];
        }    
        for(int j=0;j<n2;j++)
        {
            if(min>arr[j])
            min=arr[j];
        }
        cout<<max*min<<endl;
    }
	//code
	return 0;
}
