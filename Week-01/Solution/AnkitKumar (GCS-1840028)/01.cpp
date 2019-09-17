#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n1,n2,max,min;
        cin>>n1;
        for(long j=0;j<n1;j++)
        {
            long a;
            cin>>a;
            if(j==0)
            max=a;
            else{
                if(a>max)
                max=a;
            }
        }
        cin>>n2;
        for(long j=0;j<n2;j++)
        {
            long a;
            cin>>a;
            if(j==0)
            min=a;
            else{
                if(a<min)
                min=a;
            }
        }
        cout<<(max*min)<<endl;
    }
	//code
	return 0;
}
