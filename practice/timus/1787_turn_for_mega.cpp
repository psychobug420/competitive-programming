#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    uint32_t k{}, n{};
    std::cin >> k >> n;

    int32_t t{0}, a{};
    while(n--)
    {
        std::cin >> a;

        t += a;
        t -= k;

        if (t < 0)
        {
            t = 0;
        }
    }

    std::cout << t << std::endl;

    return 0;
}