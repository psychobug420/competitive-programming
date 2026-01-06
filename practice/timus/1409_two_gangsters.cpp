#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint16_t a{}, b{};
    std::cin >> a >> b;

    auto t_cans{a + b - 1};

    std::cout << t_cans - a << ' ' << t_cans - b << std::endl;

    return 0;
}