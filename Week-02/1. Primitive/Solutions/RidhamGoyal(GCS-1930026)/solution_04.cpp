#include <iostream>

using namespace std;

int max(int a[],int size){
    int mx=a[0];
    for(int i=0;i<size;i++){
       
        if(a[i]>mx){
            mx=a[i];
        }
    }
    return mx;
}
int min(int a[],int size){
    int mx=a[0];
    for(int i=0;i<size;i++){
       
        if(a[i]<mx){
            mx=a[i];
        }
    }
    return mx;
}
int main()
{
    int t;
    cin>>t;
    while(t){
        int size,i;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++){
            cin>>a[i];
           
        }
        cout<<max(a,size)<<" "<<min(a,size)<<endl;
        t--;
    }
    return 0;
}
