#include <iostream>
using namespace std;

int swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y<<endl;
}
int main()
{
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
     int a,b;
	 cin>>a>>b;
	 swap(a,b);
     }
     return 0;
}
