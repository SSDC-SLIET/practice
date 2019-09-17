#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int s;
        cin>>s;
        int flag=0;
        
        int i=0,j=n-1;
        
        while(j>i){
            if(a[i]+a[j]==s){
                flag=1;
                cout<<a[i]<<" "<<a[j]<<" "<<s<<endl;
                i++;
            }
            else if(a[i]+a[j]<s){
                i++;
            }else if(a[i]+a[j]>s){
                j--;
            }
        }
        if(flag==0){
            cout<<"-1"<<endl;
        }
    }
}
