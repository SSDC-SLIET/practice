#include <iostream>
#include <bits/stdc++.h>
typedef long long int lli; 
using namespace std;

lli arr[10000000]; 
lli sort(lli,lli); 
lli merged(lli,lli,lli); 

lli sort(lli l,lli r)
{  
    lli invcount=0; 
    if(l<r)
    { 
       lli m=l+(r-l)/2; 
       invcount = sort(l,m); 
       invcount += sort(m+1,r); 
       invcount += merged(l,m,r);
    } 
    // cout << invcount << endl;
    return invcount;
} 
lli merged(lli l,lli m,lli r)
{ 
    lli invcount=0;
    lli left[m-l+1],right[r-m]; 
    lli i=0,j=0,k=0; 
    for(i=0 ; i<m-l+1 ; i++) 
        left[i]=arr[l+i];
    for(i=0 ; i<r-m; i++ ) 
        right[i]=arr[m+1+i]; 
    i=0,j=0,k=l;
    while(i < m-l+1 && j<r-m) 
    {  
         if(left[i]<=right[j]) 
            arr[k++]=left[i++]; 
         else
         { 
             arr[k++]=right[j++]; 
             invcount += (m-l+1-i);  (m-l+1-i); 
             // cout << m-l+1-i << endl;
         }
       
    }  
    while(i < m-l+1) 
         arr[k++]=left[i++]; 
    while(j < r-m)
         arr[k++]=right[j++]; 
    
    // cout << "Merging " << l << " "<< m << " " << r<< "="<< invcount << endl;
    return invcount;
}   
int main() 
{
	lli cases,n; 
	cin >> cases; 
	while(cases--) 
	{ 
	    cin >> n; 
	    for(lli z=0 ; z<n ; z++) 
	        cin >> arr[z]; 
	    
	    cout << sort(lli(0),n-1) << endl; 
	    // for(lli z=0 ; z<n ; z++) 
	       // cout << arr[z] << " ";
	}
	return 0;
}
