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

    uint32_t n{};
    std::cin >> n;

    bool n_s{false};
    auto s{0u};
    for (auto i{0uz}; i < n; ++i)
    {
        uint32_t m{};
        std::cin >> m;

        if (m == 3)
        {
           n_s = true;
           break; 
        }

        s += m;
    }

    float avg = static_cast<float>(s) / n;

    if (n_s)
    {
        std::cout << "None" << std::endl;
    }
    else if (avg == 5)
    {
        std::cout << "Named" << std::endl;
    }
    else if (avg >= 4.5)
    {
        std::cout << "High" << std::endl;
    }
    else
    {
        std::cout << "Common" << std::endl;
    }

    return 0;
}