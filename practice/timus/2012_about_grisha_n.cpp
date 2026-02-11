#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#else
#define RUN_WITH_TESTS()
#endif

int main()
{
    RUN_WITH_TESTS()

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    constexpr auto n = 12u, x = 5u;

    uint32_t f{};
    std::cin >> f;

    if (n - f > x)
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        std::cout << "YES" << std::endl;
    }


    return 0;
}