#include <bits/stdc++.h>
using namespace std;

int main() {
	int TC = 0;
	char str[56];
	cin >> TC;
	while(TC--) {
	    cin >> str;
	    for(int i = 0 ; str[i] != '\0' ; i++) {
	        cout << (char)(((int)str[i]) & ~(1 << 5));
	    }
	    printf("\n");
	}
	return 0;
}
