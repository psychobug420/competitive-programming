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

    uint16_t a{}, b{};
    std::cin >> a >> b;

    auto t_cans{a + b - 1};

    std::cout << t_cans - a << ' ' << t_cans - b << std::endl;

    return 0;
}