#include <iostream>
using namespace std;

int main() {
    long i,l,t,n,k,j,p;
    cin>>t;
    for(l=0;l<t;l++)
{
    cin>>n;
    long a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>k;
    i=0;
    j=n-1;p=0;
    while(1){
        if(a[i]+a[j]==k){
            cout<<a[i]<<" "<<a[j]<<" "<<k<<"\n";
            p++;
            i++;
        }
        else if(a[i]+a[j]>k)
        j--;
        else if(a[i]+a[j]<k)
        i++;
       if(i>=j)
       break;
    }
    if(p==0)
    cout<<"-1\n";
    /*if(2*a[n-1]<=k || k<=a[0])
    cout<<"-1\n";
    else
{
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            
                if(a[i]!=a[j]){
            if(a[i]+a[j]==k)
    cout<<a[i]<<" "<<a[j]<<" "<<k<<"\n";
            }
        }
    }
    
}*/
}
	//code
	return 0;
}
