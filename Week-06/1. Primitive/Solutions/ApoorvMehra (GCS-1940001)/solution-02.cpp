#include <bits/stdc++.h>
using namespace std;

int main() {
    int TC = 0 , n = 0;
    cin >> TC;
    while(TC--) {
        cin >> n;
        cout << n * (n + 1) * (2 * n + 1) / 6 << endl; 
    }
	return 0;
}
