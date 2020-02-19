#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   int a[n],b[n];
	   for(int j=0;j<n;j++)
	   cin>>a[j];
	   int max=n-1,min=0,temp,i;
       
           for(i=0;i<=n;i++)
           if(i%2==0)
           {
               
               b[i]=a[max];
               max--;
           }
           else
           {
               
               b[i]=a[min];
               min++;
           }
       
       for(int k=0;k<n;k++)
       cout<<b[k]<<" ";
       cout<<endl;
    }
    return 0;
}
