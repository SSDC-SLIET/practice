#include <iostream>
using namespace std;

int main()
  {
	int t,num;
	cin>>t;
	for(int i=0;i<t;i++)
     {
     int N;
	 cin>>N;
	 int a[N];
	 for(int j=0;j<N;j++)
	 {
	    cin>>a[j];
	 }
	 cout<<endl;
	 for(int j=0;j<N/2;j++)
	  {
        num = a[j];
        a[j]=a[N-j-1];
        a[N-j-1]=num;
	  }cout<<endl;
        for(int j=0;j<N;j++)
	 {
	    cout<<a[j]<<" ";
	 }  cout<<endl;
    }
	return 0;
}
