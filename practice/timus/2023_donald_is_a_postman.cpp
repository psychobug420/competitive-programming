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
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int64_t t{0};
    int64_t c_p{0};
    while (n--)
    {
        char c{};
        std::cin >> c;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        auto n_p = [&c]() -> int64_t
        {
            switch (c)
            {
            // First box
            case 'A':
            {
                return 0;
            }
            case 'P':
            {
                return 0;
            }
            case 'O':
            {
                return 0;
            }
            case 'R':
            {
                return 0;
            }

            // Second box
            case 'B':
            {
                return 1;
            }
            case 'M':
            {
                return 1;
            }
            case 'S':
            {
                return 1;
            }

            // Third box
            case 'D':
            {
                return 2;
            }
            case 'G':
            {
                return 2;
            }
            case 'J':
            {
                return 2;
            }
            case 'K':
            {
                return 2;
            }
            case 'T':
            {
                return 2;
            }
            case 'W':
            {
                return 2;
            }
            }

            std::terminate();
        }();

        t += std::fabs(c_p - n_p);
        c_p = n_p;
    }

    std::cout << t << std::endl;

    return 0;
}
