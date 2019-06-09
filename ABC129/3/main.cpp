#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main(void)
{
    int m, n;
    std::cin >> n >> m;
    std::vector<bool> s(n);
    for (int i = 0; i < m; i++)
    {
        int j;
        std::cin >> j;
        s[j] = true;
    }
    int o = n / 2 + 1;
    for (int i = 0; i < o; i++)
    {
        int j = 0;
        for (int k = 0; k < i; k++)
        {
            std::cerr << j << ",";
            j += 2;
        }
        for (; j <= n; j++)
        {
            std::cerr << j << ",";
        }
        std::cerr << std::endl;
    }
    return 0;
}