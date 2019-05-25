#include <cstdio>
#include <iostream>
#include <string>

int main(void) {
  int n, a, b;
  std::cin >> n >> a >> b;
 
  int sum = 0;
  for (int x = 1; x <= n; x++) {
    int d = 0;
    auto x_str = std::to_string(x);
    for (auto digit : x_str) {
      d += std::atoi(&digit);
    }
    if (a <= d && d <= b) {
      sum += x;
    }
  }
  std::cout << sum << std::endl;
  return 0;
}
