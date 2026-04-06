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

    std::vector<std::vector<uint64_t>> m{};
    m.resize(n);
    for (auto &r : m)
    {
        r.resize(n);
    }

    auto a{0ull};
    for (auto d{0z}; d < n; ++d)
    {
        auto r{0z}, c{d};
        while (r < n && c >= 0)
        {
            m[r][c] = ++a;
            ++r, --c;
        }
    }

    for (auto d{1uz}; d < n; ++d)
    {
        auto r{d}, c{n - 1};
        while (r < n && c >= 0)
        {
            m[r][c] = ++a;
            ++r, --c;
        }
    }

    for (const auto &r : m)
    {
        for (const auto &el : r | std::ranges::views::reverse)
        {
            std::cout << el << ' ';
        }

        std::cout << '\n';
    }

    std::cout.flush();
    return 0;
}