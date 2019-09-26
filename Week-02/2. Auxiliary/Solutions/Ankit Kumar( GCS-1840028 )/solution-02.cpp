/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
   for(int i=0;i<t;i++){
       long n;
       cin>>n;
       long double patlu[n];
       long double motu[n];
       for(long j=0;j<n;j++){
           long double d;
           cin>>d;
           patlu[j]=d;
           motu[j]=d/2;
       }
       long double pre=0.0;
       for(long j=0;j<n;j++){
           long double pre1=motu[j];
           motu[j]=pre;
           pre+=pre1;
       }
       pre=0.0;
       for(long j=n-1;j>=0;j--){
           long double pre1=patlu[j];
           patlu[j]=pre;
           pre+=pre1;
       }
       long motu_c=0,patlu_c=0;
       for(long j=0;j<n;j++){
           if(motu[j]<=patlu[j])
           motu_c++;
           else
           patlu_c++;
           
       }
       cout<<motu_c<<" "<<patlu_c<<endl;
       if(motu_c>patlu_c)
       cout<<"Motu"<<endl;
       else if(patlu_c>motu_c)
       cout<<"Patlu"<<endl;
       else
       cout<<"Tie"<<endl;
       
   }
    return 0;
}
