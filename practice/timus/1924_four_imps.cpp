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

    size_t n{};
    std::cin >> n;
    
    if (((n + 1) / 2) % 2 == 0)
    {
        std::cout << "black" << std::endl;
    }
    else
    {
        std::cout << "grimy" << std::endl;
    }

    return 0;
}
