#include<iostream>
using namespace std;
int main()
{
 int T;
 cin>>T;
 int i;
 for(i=1;i<=T;i++)
   { int x,y,j;
     cin>>x;
     long int N1[x];
     for(j=0;j<x;j++)
       cin>>N1[j];
     long int max=0;
     max=N1[0];
     for(j=1;j<x;j++)
      { 
        if(max<N1[j])
       { max=N1[j]; }
      }
     cin>>y;
     long int N2[y];
     for(j=0;j<y;j++)
       cin>>N2[j];
     long int min=N2[0];
     for(j=1;j<y;j++)
     {
         if(min>N2[j])
      { min=N2[j]; }
     } 
     long long int k=0;
     k=max*min;
     cout<<k;
     cout<<endl;
 }
 return 0;
}




