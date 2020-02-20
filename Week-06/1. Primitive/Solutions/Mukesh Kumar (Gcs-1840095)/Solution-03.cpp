#include<iostream>
using namespace std;

int main()
 {
	//code
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                sum1+=arr[i][j];
                if(i+j==n-1)
                sum2+=arr[i][j];
            }
        }    
        int dif=abs(sum1-sum2);
        cout<<dif<<endl;
    }
    
	return 0;
}
