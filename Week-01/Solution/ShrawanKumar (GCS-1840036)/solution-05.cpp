#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long int j,s,n,k;
        int r=0;
        cin>>n;
        vector<int> A;
	    for(j=0;j<n;j++){
	        int x;
	        cin>>x;
	        A.push_back(x);
	    }
        cin>>k;

        vector<pair<int,int> > ans;
	    for(int j=0,s=n-1;j<s;){
	        if(A[j]+A[s]==k){
	            ans.push_back(make_pair(A[j],A[s]));
                r=1;
                j++;
                s--;}
	       else if(A[j]+A[s]>k){
	            s--;
	        }else if(A[j]+A[s]<k){
	            j++;
	        } 
        }
         if(r==0)
         cout<<"-1"<<endl;
         else{
         for(j=0;j<ans.size();j++)
         cout<<ans[j].first<<" "<<ans[j].second<<" "<<k<<endl;}
    }
	return 0;
}
