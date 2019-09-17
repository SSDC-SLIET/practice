#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t,i,j,size,a[1000],A,B,r1,r2,b[1000],C,flag=0;
    cin>>t;
    
    while(t){
             cin>>size>>A>>B;
             for(i=0;i<size;i++){
                                 cin>>a[i];
             }
             C=A;
             r1=abs(A-B)+1;
             r2=r1;
//             flag=0;
             for(i=0;i<r1;i++){
                               b[i]=C;
                               C++;
             }
             for(i=0;i<size;i++){
                                 flag=0;
                                 for(j=0;j<r1;j++){
                                                   if(a[i]==b[j]){
                                                                  r2--;     
                                                                  flag=1;      
                                                   }
                                 }
             }
             
             if(r2==0 && flag==1){
                       cout<<"Yes"<<endl;
                      // break;
                       
             }else
                  cout<<"No"<<endl;
                   // break;
             t--;
    }
    


    
}


