#include <iostream>

int main() {
  int value = 0 , sum = 0 , n = 0;
  std::cin >> n;
  for(int i = 0 ; i < n ; ++i) {
    std::cin >> value;
    sum += value;
  }

  std::cout << sum << std::endl;
  return 0;
}
