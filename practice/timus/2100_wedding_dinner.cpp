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

    std::size_t n{};
    std::cin >> n;

    auto gc{2uz};
    while(n--)
    {
        std::string g{};
        std::cin >> g;

        if (g.find('+') != std::string::npos)
        {
            gc += 2;
            continue;
        }
        
        ++gc;
    }

    if (gc == 13)
    {
        ++gc;
    }

    std::cout << gc * 100 << std::endl;

    return 0;
}
