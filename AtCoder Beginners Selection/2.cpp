#include <iostream>
#include <string>

int main(void) {
  int a, b;
  std::cin >> a >> b;
  std::cout << (a * b % 2 == 0 ? "Even" : "Odd") << std::endl;
  return 0;
}
