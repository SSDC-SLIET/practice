#include<iostream>
using namespace std;

int main()
{
      int T,k;
      cin>>T;
      for(k=1;k<=T;k++)
       {
          int i,j,N;
          cin>>N;
          int a[N][N];
          for(i=0;i<N;i++)
           {for(j=0;j<N;j++)
             { 
                 cin>>a[i][j];
             }
          }     
          for(j=0;j<N;j++)
           {
            for(i=N-1;i>=0;i--) 
              {
                  cout<<a[i][j]<<" ";
              }
           }
          cout<<endl;
        }
        return(0);
 }   
