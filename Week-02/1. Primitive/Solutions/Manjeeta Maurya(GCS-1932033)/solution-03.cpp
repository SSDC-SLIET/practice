#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
int n;    
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int j=n-1;j>=0;j--)
cout<<a[j]<<" ";
cout<<endl;

}
	return 0;
}
