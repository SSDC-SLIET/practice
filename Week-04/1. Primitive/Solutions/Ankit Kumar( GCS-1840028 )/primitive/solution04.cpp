#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long n,m;
        cin>>n>>m;
        long arr[n]={0};
        for(long j=0;j<m;j++){
            long a,b,k;
            cin>>a>>b>>k;
            arr[a]+=k;
            if(b+1<n){
                arr[b+1]-=k;
            }
            
          
        }
        long max=arr[0];
        for(long j=1;j<n;j++){
            arr[j]=arr[j]+arr[j-1];
            if(arr[j]>max)
                max=arr[j];
            
        }
        cout<<max<<endl; 
    }
    return 0;
}
