#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint64_t m{}, n{};
    std::cin >> n >> m;

    std::cout << n * (m + 1ull) << std::endl;

    return 0;
}