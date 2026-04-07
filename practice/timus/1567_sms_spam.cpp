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

    std::string s{};
    std::getline(std::cin, s);

    int64_t tc{0};
    for (const char& c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            int64_t n = c - 'a';
            if ((n + 1) % 3 == 0)
            {
                tc += 3;
            }

            tc += (n + 1) % 3;
            continue;
        }

        switch (c)
        {
            case ' ':
            {
                tc += 1;
                break;
            }
            case '.':
            {
                tc += 1;
                break;
            }
            case ',':
            {
                tc += 2;
                break;
            }
            case '!':
            {
                tc += 3;
                break;
            }
        }
    }

    std::cout << tc << std::endl;

    return 0;
}