#include<iostream>
using namespace std;

int max1(int a[],int s1){
    int max,i;
    max=a[0];
    for(i=0;i<s1;i++){
            if(a[i]>max){
                         max = a[i];
            }
    }
    return max;
    
}
int min1(int a[],int s2){
    int min,i;
    min=a[0];
    for(i=0;i<s2;i++){
            if(a[i]<min){
                         min = a[i];
            }
    }
    return min;
    
}

int main()
{
 int a[1000000], b[1000000],t,i,j,max,min,s1,s2;
 long int result;
 cin>>t;
 while(t){
          cin>>s1;
          for(i=0;i<s1;i++)
          {
           cin>>a[i];
          }
          cin>>s2;
          for(i=0;i<s2;i++)
          {
           cin>>b[i];
          }
          
          max=max1(a,s1);
          min= min1(b,s2);
          
          result=max*min;
          cout<<result<<endl;
          t--;
 }
 
 
 
}
