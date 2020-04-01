#include <bits/stdc++.h>
#define diff_abs(a) ((a > 0) ? (a) : -(a))

using namespace std;

int a[53][53];

int main() {
	int TC = 0 , n = 0 , x = 0 , y = 0;
	cin >> TC;
	while(TC--) { cin >> n; x = y = 0; 
	    for(int i = 0 ; i < n ; i++) {
	        for(int j = 0 ; j < n ; j++) {
	            cin >> a[i][j]; if(i == j) x += a[i][j];
	            if(i + j == n - 1) y += a[i][j]; } }
	    cout << diff_abs(x - y) << endl;
	    
	}
	return 0;
}
