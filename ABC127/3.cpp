#include <algorithm>
#include <iostream>

int main(void) {
  int n, m, l, r;
  std::cin >> n >> m;

  int min, max;
  min = 1;
  max = n;

  for (int i = 0; i < m; i++) {
    std::cin >> l >> r;
    min = min < l ? l : min;
    max = max > r ? r : max;
  }

  std::cout << std::max(0, max - min + 1) << std::endl;

  return 0;
}
