#include <iostream.h>
using namespace std;
int main(){
    int n1,n2,t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n1;
        int a[n1];
    for(int j=0;j<n1;j++)
    cin>>a[j];
    cin>>n2;
    int b[n2];
    for(int j=0;j<n2;j++)
    cin>>b[j];
    int max=a[0];
    for(int j=1;j<n1;j++)
    {if(a[j]>max)
    max=a[j];
    }
    int min=b[0];
    for(int j=1;j<n2;j++)
    {
        if(b[j]<min)
        min=b[j];
    }
    cout<<max*min<<endl;
    }
    return 0;
}

