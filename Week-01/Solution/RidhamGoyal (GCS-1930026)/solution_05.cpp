#include<iostream>
using namespace std ;

int main(){
    int i,n,a[100000],k,t,j,flag=0,low=0,high;
    cin>>t;
    while(t){
             flag=0;
             cin>>n;
             for(i=0;i<n;i++){
                              cin>>a[i];
             }
             cin>>k;
             low=0;
             high=n-1;
             while(low<high){
                             if(a[low]+a[high]==k){
                                                   cout<<a[low]<<" "<<a[high]<<" "<<k<<endl;
                                                   flag=1;
                                                   low++;
                                                   high--;
                             }
                             else if(a[low]+a[high]<k){
                                  low++;
                             
                             }
                             else {
                                  high--;
                             }
                             
             }
             
             if(flag==0){
                         cout<<"-1"<<endl;
             }
             t--;
    }
    
}
