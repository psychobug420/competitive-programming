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

    std::vector<std::pair<uint64_t, uint32_t>> v{};
    v.reserve(n);

    while (n--)
    {
        std::pair<uint64_t, uint32_t> v_i{};
        std::cin >> v_i.first >> v_i.second;

        v.emplace_back(v_i);
    }

    std::stable_sort(v.begin(), v.end(), [](const auto &lhs, const auto &rhs) {
        return rhs.second < lhs.second;
    });

    for (const auto& [id, m] : v)
    {
        std::cout << id << ' ' << m << std::endl;
    }

    return 0;
}