#include <iostream>
using namespace std;

int main() {
	int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int* a;
        int n;
        cin>>n;
        a=new int[n];
        int max=0,min=1000;
        for(int j=0;j<n;j++)
        cin>>a[j];
        for(int j=0;j<n;j++)
        {
            if(a[j]>max)
            max=a[j];
            if(min>a[j])
            min=a[j];
        }
        cout<<max<<" "<<min;
        cout<<endl;
    }
	//code
	return 0;
}
