#include <iostream>
using namespace std;
int main() {
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        int* a;
        cin>>n;
        a=new int[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int j=0;j<1000000;j++)
        {
            int temp=0;
            for(int p=0;p<n;p++)
            {
                if(j==a[p])
                temp++;
            }
            if(temp==1)
            {cout<<j<<endl;
            break;}
        }
    }
	//code
	return 0;
}
