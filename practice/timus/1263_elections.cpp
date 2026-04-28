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

    uint32_t n{}, m{};
    std::cin >> n >> m;

    std::vector<uint32_t> v{};
    v.resize(n);
    
    for (auto i{0uz}; i < m; ++i)
    {
        size_t m_i{};
        std::cin >> m_i;

        ++v[m_i - 1];
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    for (const auto& c : v)
    {
        std::cout << static_cast<double>(c) / m * 100 << '%' << std::endl;
    }

    return 0;
}