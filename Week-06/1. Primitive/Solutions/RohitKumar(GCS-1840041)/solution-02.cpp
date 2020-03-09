#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int i=1;
        cin>>n;
        int sum=0;
        int m=1;
        
        while(m<=n)
        {
        for(int j=1;j<=m;j++)
        {
            sum=sum+i;
            i+=2;
        }
        m++;
        i=1;
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}
