 #include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int min,max;
        long n1,n2;
        cin>>n1;
        for(long j=0;j<n1;j++)
        {
            long a;
            if(j==0)
            {
                cin>>a;
                max=a;
            }
            else
            {
                cin>>a;
                if(a>max)
                max=a;
            }
        }
        cin>>n2;
        for(long j=0;j<n2;j++)
        {
            long a;
            if(j==0)
            {
                cin>>a;
                min=a;
            }
            else
            {
                cin>>a;
                if(a<min)
                min=a;
            }
        }
        cout<<min*max<<endl;
    }
	//code
	return 0;
}
