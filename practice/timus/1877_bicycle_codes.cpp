#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint32_t f{}, s{};
    std::cin >> f >> s;

    if (f % 2 == 0 || s % 2 != 0)
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }

    return 0;
}