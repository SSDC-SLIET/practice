#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
typedef unsigned long long ull;
int main() 
{
	ull cases,n,a,b,k,ma,mb,mab;
	cin >> cases;
	while(cases--)
   {
	    cin >> n >> a >> b >> k;
	    ma=n/a;
	    mb=n/b;
	    mab=n/(a*b);
	    if(a==b) cout << "Lose" << endl; 
	    else if(a%b==0) (mb-ma>=k)? cout << "Win" << endl : cout<< "Lose" << endl;
	    else if(b%a==0) (ma-mb>=k) ? cout << "Win" << endl :cout << "Lose" << endl;
	    else { (ma+mb-2*mab>=k) ? cout << "Win" << endl : cout << "Lose" << endl; } 
   }
	return 0;
}
