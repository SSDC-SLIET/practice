#include<iostream>
using namespace std;
int main()
 {
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
       int n,k;
       cin>>n>>k;
       int arr[n];
       for(int j=0;j<n;j++)
       cin>>arr[j];
       int count=0;
       for(int j=0;j<n;j++)
           {
               int a1=arr[j];
               int l=0;
               while(l<n&&l!=j)
                 {
                    int a2=arr[l];
                    if((a1+a2)==k)
                    count++;
                    l++;
                 }
           }
        cout<<count<<endl;
    }
    //code
	return 0;
}
