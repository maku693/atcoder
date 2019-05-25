#include <vector>
#include <cstdlib>
#include <cstddef>
#include <iostream>

int main(void) {
  std::size_t n;
  std::cin >> n;

  std::vector<int> va(n);
  for (int i = 0; i < n; i++) {
    std::cin >> va[i];
  }

  bool is_valid = true;
  int count = 0;
  while (true) {
    for (int i = 0; i < n; i++) {
      auto div = std::div(va[i], 2);
      if (div.rem != 0) {
        is_valid = false;
        break;
      }
      va[i] = div.quot;
    }
    if (!is_valid) {
      break;
    }
    count++;
  }
  std::cout << count << std::endl;

  return 0;
}
