#include <iostream>
using namespace std;

int find(int x)
{
    int sum=0,i,j;
    for(i=1;i<=x;i++)
    {
        int k=1;
        for(j=1;j<=i;j++)
        {
            sum=sum+k;
            k=k+2;
        }
    
}
return sum;
}
int main()
{
	//code
	int n=5;
	cout<<"sum="<<find(n);
	return 0;
}
