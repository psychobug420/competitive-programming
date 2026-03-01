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

    std::int32_t a{}, b{};
    std::cin >> a >> b;

    if ((a * b) % 2 == 0)
    {
        std::cout << "[:=[first]" << std::endl;
    }
    else
    {
        std::cout << "[second]=:]" << std::endl;
    }

    return 0;
}