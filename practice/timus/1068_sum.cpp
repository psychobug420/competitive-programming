#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#endif

int main()
{
#ifdef COMPETITIVE_DEBUG
    RUN_WITH_TESTS()
#else
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
#endif

    int64_t n{};
    std::cin >> n;

    int64_t n_abs = std::abs(n);
    int64_t sum = n_abs * (n_abs + 1) / 2;

    if (n <= 0)
    {
        std::cout << -sum + 1 << std::endl;
    }
    else
    {
        std::cout << sum << std::endl;
    }

    return 0;
}