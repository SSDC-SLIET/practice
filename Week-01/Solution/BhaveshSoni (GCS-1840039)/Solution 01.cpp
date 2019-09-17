#include<iostream>
using namespace std;
int main()
 {
     int t,c,p,max,min;
     cin>>p;
     for(t=1;t<=p;t++){
        {
         int n,i,m;
         cin>>n;
         long long int n1[n];
         
         for(i=0;i<n;i++)
         {
             cin>>n1[i];
         }
         cin>>m;
           long long int n2[m];
         for(i=0;i<m;i++){
             cin>>n2[i];
         }
         max=n1[0];
         for(i=0;i<n;i++){
                 if(max<n1[i])
                  max=n1[i];
         }
         min=n2[0];
         for(i=0;i<m;i++){
             if(min>n2[i])
             min=n2[i];}
         }
         c=max*min;
         cout<<c<<endl;
    }
		return 0;
}                                            
