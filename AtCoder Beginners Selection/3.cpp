#include <iostream>

int main(void) {
  char c;
  int sum = 0;
  while (std::cin) {
    c = std::cin.get();
    sum += (c == '1' ? 1 : 0);
  }
  std::cout << sum << std::endl;
  return 0;
}
