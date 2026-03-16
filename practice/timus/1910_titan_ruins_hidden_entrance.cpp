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

    std::vector<std::int32_t> v{};
    v.reserve(n);

    while(n--)
    {
        std::int32_t a{};
        std::cin >> a;

        v.emplace_back(a);
    }

    auto max{0};
    auto idx{2ull};
    for (auto i{1uz}; i < v.size() - 1; ++i)
    {
        if (v[i - 1] + v[i] + v[i + 1] > max)
        {
            max = v[i - 1] + v[i] + v[i + 1];
            idx = i + 1;
        }
    }

    std::cout << max << ' ' << idx << std::endl;

    return 0;
}