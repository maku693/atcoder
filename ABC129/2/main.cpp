#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main(void)
{
    int n;
    std::cin >> n;
    std::vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> w[i];
    }
    std::vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        auto wi = w.begin();
        std::advance(wi, i);
        x[i] = std::abs(std::accumulate(w.begin(), wi, 0) - std::accumulate(wi, w.end(), 0));
    }
    auto min = std::min_element(x.begin(), x.end());
    std::cout << *min << std::endl;
    return 0;
}