/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
bool sort_by_time(vector<long> a,vector<long> b){
    if(a[1]<b[1])
    return true;
    else
    return false;
}
bool sort_by_index(vector<long> a,vector<long> b){
    if(a[0]<b[0])
    return true;
    else
    return false;
}
int main(){
long n,m;
cin>>n>>m;
int taxis[m]={0};
vector<vector<long>> users;

for(long i=0;i<n;i++){
    long st,dur;
    cin>>st>>dur;
   vector<long> det;
   det.push_back(i);
   det.push_back(st);
   det.push_back(dur);
   users.push_back(det);
}
sort(users.begin(),users.end(),sort_by_time);
for(long i=0;i<n;i++){
    int got=0;
    for(long j=0;j<m;j++){
        if(taxis[j]<=users[i][1])
        {
            users[i].push_back(j+1);
            taxis[j]=users[i][1]+users[i][2];
            got=1;
            break;
        }
    }
    if(!got){
        long nul=-1;
    users[i].push_back(nul);}
}
sort(users.begin(),users.end(),sort_by_index);
for(long j=0;j<n;j++){
    cout<<users[j][3]<<" ";
}
    return 0;
}
