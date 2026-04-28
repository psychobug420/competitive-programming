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

    uint32_t a{}, b{}, c{}, d{};
    std::cin >> a >> b >> c >> d;

    if (c <= a)
    {
        std::cout << a << std::endl;
        return 0;
    }

    auto delta = c - a;
    auto steps = (delta + (b + d - 1)) / (b + d);

    std::cout << std::min(a + steps * b, c - (steps - 1) * d) << std::endl;

    return 0;
}