#include<iostream>
using namespace std;
int main()
 {
     int t,n;
     cin>>n;
     for(t=1;t<=n;t++)
     {
         int m;
         cin>>m;
         int a[m],i,max,min;
         for(i=0;i<m;i++)
         {
             cin>>a[i];
         }
         max=a[0];
         for(i=0;i<m;i++)
         {
             if(max<a[i])
             {
                 max=a[i];
             }
         }
        
          min=a[0];
         for(i=0;i<m;i++){
            
             if(min>a[i])
             {
                 min=a[i];
         }
         }
         cout<<max<<" "<<min;
         cout<<endl;
         
     }
	//code
	return 0;
}
