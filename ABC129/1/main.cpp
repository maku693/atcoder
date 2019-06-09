#include <algorithm>
#include <array>
#include <iostream>

int main(void)
{
    int p, q, r;
    std::cin >> p >> q >> r;
    int result = std::min({p + q, q + r, p + r, r + q, r + p, q + p});
    std::cout << result << std::endl;
    return 0;
}