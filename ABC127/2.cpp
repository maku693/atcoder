#include <iostream>

int main(void) {
  int r, d, x;
  std::cin >> r >> d >> x;

  for (int i = 0; i < 10; i++) {
    x = r * x - d;
    std::cout << x << std::endl;
  }

  return 0;
}
