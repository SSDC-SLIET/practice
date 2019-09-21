#include<iostream>
using namespace std;
int main()
{
	int t, p;
	int x, y;
	cin>>t;
	for(p=0; p<t; p++)
	{
	    int n;
	    cin>>n;
	    int a,b;
	    int arr[n];
	    cin>>a>>b;
	    x=(a-1);
	    y=b;
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    for(int j=a; j<=b; j++)
	    {
	       for(int i=0; i<n; i++)
	        {
	            if(j==arr[i])
	              x++;
	        }
	    }
	    
	if(x==y){
	     cout<<"Yes";
	     cout<<endl;
	}
	else{
	     cout<<"No";
	     cout<<endl;
	}
	}
	return 0;
}
