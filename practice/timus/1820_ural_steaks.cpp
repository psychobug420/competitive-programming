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

    int64_t n{}, k{};
    std::cin >> n >> k;

    std::cout << std::max(2ll, (2 * n + k - 1) / k) << std::endl;

    return 0;
}