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
         int a[m],i;
         for(i=0;i<m;i++)
         {
             cin>>a[i];
         }
         int b[1017]={0};
         for(i=0;i<m;i++)
         {
             b[a[i]]++;
         }
         for(int j=0;j<1017;j++)
         {
             if(b[j]==1)
             cout<<j;
         }
             cout<<endl;
     }
	//code
	return 0;
}
