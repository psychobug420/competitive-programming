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

    std::set<uint32_t> pos{};

    auto j{0u};
    auto i{0ull};
    while(i < std::numeric_limits<uint32_t>::max())
    {
        pos.emplace(i + 1);
        ++j;
        i += j;
    }

    std::size_t n{};
    std::cin >> n;

    while (n--)
    {
        std::uint32_t a{};
        std::cin >> a;

        if (pos.contains(a))
        {
            std::cout << '1' << ' ';
            continue;
        }

        std::cout << '0' << ' ';
    }

    std::cout << std::endl;

    return 0;
}