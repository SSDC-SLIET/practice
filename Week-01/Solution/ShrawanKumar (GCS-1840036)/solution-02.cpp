#include <bits/stdc++.h> 
using namespace std; 
bool check_elements(int arr[], int n, int A, int B) 
{ 
    int range = B - A; 

    for (int i = 0; i < n; i++) { 
        if (abs(arr[i]) >= A && abs(arr[i]) <= B) { 
            int z = abs(arr[i]) - A; 
            if (arr[z] > 0) { 
                arr[z] = arr[z] * -1; 
                break;
            } 
        } 
    } 
    int count=0; 
    for (int i = 0; i <= range && i<n; i++) { 
        if (arr[i] > 0) 
            return false; 
        else
            count++; 
    } 
     if(count!= (range+1)) 
        return false; 
     else
    return true; 
} 
int main() 
{ 
    int t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    int arr[n],j;
	    for(j=0;j<n;j++)
	    cin>>arr[j];

        if (check_elements(arr, n, a, b)) 
          cout << "Yes"<<endl; 
         else
           cout << "No"<<endl; 
    }   
  
    return 0; 
}
