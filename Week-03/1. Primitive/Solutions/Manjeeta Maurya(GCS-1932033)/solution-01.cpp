#include <iostream>
using namespace std;

int main() {
  int t,i;
  cin>>t;
 
  for(i=0;i<t;i++){
      int n,j,c=1;
      cin>>n;
     for( j=1;j<=n;j++)
      {
      cout<<c<<" ";
      c=c*(n-j)/j;
          
      }
      cout<<endl;
      }
     
  
	return 0;
}
