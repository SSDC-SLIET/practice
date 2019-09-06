#include <iostream>
using namespace std;

int main() {
    int t,n,d;
    long int sum;
    cin>>t;
    for(int i=0;i<t;i++)
    {
   sum=0;
      long   car[100000];
    long     p[100000];
        cin>>n>>d;
        for(long j=0;j<n;j++)
        {
            cin>>car[j];
        }
        for(long j=0;j<n;j++)
        {
            cin>>p[j];
        }
      if(d%2==0)
      {
          
          for(long j=0;j<n;j++)
          {
              if(car[j]%2!=0)
              sum +=p[j];
          }
      }
      else
      {
         for(long j=0;j<n;j++)
         {
            if(car[j]%2==0)
             sum =sum + p[j];
         }
      }
      cout<<sum<<endl;
    }
    
	//code
	return 0;
}
