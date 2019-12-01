#include <iostream>

int main() {
  int t = 0 , n = 0;
  std::cin >> t;
  while(t--) {
    std::cin >> n;
    int bits[n];
    int zeros = 0;
    for(int i = 0 ; i < n ; ++i) {
      std::cin >> bits[i];
      if(bits[i] == 0) ++zeros;
    }
    std::cout << zeros << std::endl;
  }
  return 0;
}
