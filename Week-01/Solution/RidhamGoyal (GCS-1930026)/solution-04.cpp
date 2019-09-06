#include<iostream>
using namespace std;

int main(){
    int t,n,i,num;
     long int a[100000];
    cin>>t;
    while(t){
             
             cin>>n;
             num=0;
             for(i=0;i<n;i++){
                              cin>>a[i];
             }
             for(i=0;i<=n;i++){
                              if(a[i]==a[i-1] || a[i]==a[i+1]){
                                              
                              }else{
                                   num=a[i];
                                   break;
                              }
             }
             cout<<num<<endl;
             t--;
    }
    
}
