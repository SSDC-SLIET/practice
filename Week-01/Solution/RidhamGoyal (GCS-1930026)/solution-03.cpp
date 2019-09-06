#include<iostream>
using namespace std;

int main(){
    long int t,i,j,n,car_no[100000],penal[100000],d,fine=0;
    cin>>t;
    while(t){
             cin>>n>>d;
             fine=0;
             for(i=0;i<n;i++){
                              cin>>car_no[i];
             }
             for(i=0;i<n;i++){
                              cin>>penal[i];
             }
             if(d%2==0){
                        for(i=0;i<n;i++){
                                 if(car_no[i]%2==1){
                                                  fine=fine+penal[i];
                                 }        
                        }
             }else{
                   for(i=0;i<n;i++){
                                 if(car_no[i]%2==0){
                                                  fine=fine+penal[i];
                                 }        
                        }
             
             
             }
             cout<<fine<<endl;
             
             t--;
    }

}
