#include<iostream>
using namespace std;

int mx1(int a[],int c);
int mn1(int a[],int d);

int main() {
	int a[100000],b[100000],t,i,j,mx,mn,c,d;
	long int result;
	cin>>t;
	while(t)
	{
		cin>>c;
		for(i=0;i<c;i++)
		{
	  		cin>>a[i];  
		}
		cin>>d;
		for(i=0;i<d;i++)
		{
	  		cin>>b[i];  
		}
	 
	 	mx=mx1(a,c);
	 	mn=mn1(b,d);
	 	result=mx*mn;
	 	cout<<result<<endl;
	 	t--;
	}
	
}
	int mx1(int a[],int c)
	{
	   int m;
	   m=a[0];
	   for(int i=0;i<c;i++)
	   {
	   if(a[i]>m)
	   {
	       m=a[i];
	   }
	   }
	   return m;
	}
	
	int mn1(int a[],int d)
	{
	   int n;
	   n=a[0];
	   for(int i=0;i<d;i++)
	   {
	   if(a[i]<n)
	   {
	       n=a[i];
	   }
	   }
	   return n;
	}
	
