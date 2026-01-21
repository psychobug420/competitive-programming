#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::array<uint16_t, 2> r{};
    uint16_t x{}, y{};
    std::cin >> x >> y;

    std::cin >> y;

    r[0] = y - x;

    std::cin >> y >> y;

    r[1] =  x - y;
    
    std::cout << r[1] << ' ' << r[0];

    return 0;
}