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

    uint64_t c_n{}, n_n{}, n_c{0};
    std::cin >> c_n;
    ++n_c;

    while (--n)
    {
        std::cin >> n_n;

        if (n_n == c_n)
        {
            ++n_c;
            continue;
        }

        std::cout << n_c << ' ' << c_n << ' ';

        c_n = n_n;
        n_c = 1;
    }

    std::cout << n_c << ' ' << c_n << std::endl;

    return 0;
}