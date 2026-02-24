#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#endif

void do_test_case()
{
    size_t n{};
    std::cin >> n;

    std::map<uint64_t, uint64_t> a{};

    for (auto i{0uz}; i < n; ++i)
    {
        size_t num{};
        std::cin >> num;

        a.emplace(num, 1);
    }

    for (auto i{1uz}; i <= n; ++i)
    {
        if (i < a.begin()->first)
        {
            std::cout << "-1" << ' ';
            continue;
        }

        if (a.contains(i))
        {
            std::cout << a.at(i) << ' ';
            continue;
        }

        auto min_count = std::numeric_limits<int32_t>::max();
        auto it = a.begin();
        while (it != a.end() && it->first <= std::sqrt(i) && i != 1)
        { 
            if (i % it->first == 0 && a.contains(i / it->first) && min_count > a.at(i / it->first) + it->second)
            {
                min_count = a.at(i / it->first) + it->second;
            }

            ++it;
        }

        if (min_count == std::numeric_limits<int32_t>::max())
        {
            std::cout << "-1" << ' ';
            continue;
        }

        std::cout << min_count << ' ';
        a.emplace(i, min_count);
    }

    std::cout << std::endl;
}

int main()
{
#ifdef COMPETITIVE_DEBUG
    RUN_WITH_TESTS()
#else
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
#endif

    size_t t{};
    std::cin >> t;

    while (t-- > 0)
    {
        do_test_case();
    }

    return 0;
}