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

    std::vector<std::unordered_set<int32_t>> nums{};
    nums.reserve(3); 

    for (auto i{0uz}; i < 3; ++i)
    {
        std::size_t n{};
        std::cin >> n;

        std::unordered_set<int32_t> s{};
        s.reserve(n);

        while (n--)
        {
            std::int32_t v{};
            std::cin >> v;

            s.emplace(v);
        }

        nums.emplace_back(s);
    }

    auto tec{0uz};
    for (const auto &el : nums.front())
    {
        if (std::all_of(nums.begin(), nums.end(), [el](const std::unordered_set<int32_t> &s) -> bool
                        { return s.contains(el); }))
        {
            ++tec;
        }
    }

    std::cout << tec << std::endl;

    return 0;
}