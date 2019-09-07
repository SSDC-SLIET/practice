#include <iostream>
using namespace std;

int main() {
    int T,i,k;
    cin>>T;
    k=1;
    while(k<=T)
    {
        int N,D,sum=0;
        cin>>N>>D;
        int  p[N],c[N];
        for(i=0;i<N;i++)
        {
        cin>>c[i];
        }
        for(i=0;i<N;i++)
        {
            cin>>p[i];
        }
        if(D%2==0)
        {
        for(i=0;i<N;i++)
        {
         if(c[i]%2==1)
         sum = sum+p[i];
         }
        }
         else
         {
            for(i=0;i<N;i++)
            {
            if(c[i]%2==0)
            sum = sum + p[i];
         }
        }
        k++;
        cout<<sum<<endl;
    }
	//code
	return 0;
}
