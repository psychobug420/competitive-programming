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

    std::int32_t n{};
    std::cin >> n;

    std::vector<std::vector<int32_t>> r{};
    r.reserve(n);
    for (auto i{0uz}; i < n; ++i)
    {
        std::vector<int32_t> v{};
        v.reserve(n);
        r.emplace_back(v);
    }

    for (auto i{0uz}; i < n; ++i)
    {
        for (auto j{0uz}; j < n; ++j)
        {
            std::int32_t v{};
            std::cin >> v;

            r[i].emplace_back(v);
        }
    }

    for (auto i{0}; i < n; ++i)    
    {
        for (auto j{i}, k{0}; j >= 0 && k < n; --j, ++k)
        {
            std::cout << r[j][k] << ' ';
        }
    }

    for (auto i{1}; i < n; ++i)    
    {
        for (auto j{n - 1}, k{i}; j >= 0 && k < n; --j, ++k)
        {
            std::cout << r[j][k] << ' ';
        }
    }

    return 0;
}