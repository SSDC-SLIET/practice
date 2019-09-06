#include <iostream>
using namespace std;

int main() {
  long  int t,n,A,B,temp=0,h=0,a[1000];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        h=0;
        cin>>n>>A>>B;
        
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int k=A;k<=B;k++)
        {
            temp=0;
            for(int l=0;l<n;l++)
            {
                
                if(a[l]==k)
                temp++;
            }    
                if(temp>0)
                h++;
               
            
        }
	//code
	if(h==B-A+1)
	cout<<"Yes"<<endl;
	else 
	cout<<"No"<<endl;
        }
	return 0;
}
