#include <iostream>

int main(void) {
  int a, b;
  std::cin >> a >> b;

  int cost;

  if (a > 12) {
    cost = b;
  } else if (a > 5) {
    cost = b / 2;
  } else {
    cost = 0;
  }

  std::cout << cost << std::endl;

  return 0;
}
