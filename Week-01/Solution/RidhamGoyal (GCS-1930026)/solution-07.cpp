#include<iostream>
using namespace std;

int main(){
    int t,n,i,j,a[10][10];
    cin>>t;
    while(t){
             cin>>n;
             for(i=0;i<n;i++){
                              for(j=0;j<n;j++){
                                               cin>>a[i][j];
                              }
             }
             for(i=0;i<n;i++){
                              for(j=n-1;j>=0;j--){
                                                  cout<<a[j][i]<<" ";
                              }
             }
             cout<<endl;
    
             t--;
    }
    
}
