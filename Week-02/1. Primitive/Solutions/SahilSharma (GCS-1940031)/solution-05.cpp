#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int cases;
    cin >> cases;
    
    while(cases--)
    {
        string S;
        
        cin >> S;
        
        std::reverse(std::begin(S),std::end(S));
        
        cout << S << endl;
    }
    
	return 0;
}
