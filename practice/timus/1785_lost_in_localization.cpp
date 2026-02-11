#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#else
#define RUN_WITH_TESTS()
#endif

int main()
{
    RUN_WITH_TESTS()

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    const std::map<uint32_t, std::string> dict{
        {4, "few"},
        {9, "several"},
        {19, "pack"},
        {49, "lots"},
        {99, "horde"},
        {249, "throng"},
        {499, "swarm"},
        {999, "zounds"},
        {2000, "legion"},
    };

    uint32_t n{};
    std::cin >> n;

    auto it = dict.lower_bound(n);

    std::cout << it->second << std::endl;

    return 0;
}