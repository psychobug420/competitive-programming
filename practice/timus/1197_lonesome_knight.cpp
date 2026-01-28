#include <bits/stdc++.h>

void do_test()
{
    std::string l{};
    std::cin >> l;

    const std::array<std::pair<int32_t, int32_t>, 8> m{{{1, 2},
                                                        {-1, 2},
                                                        {1, -2},
                                                        {-1, -2},
                                                        {2, 1},
                                                        {-2, 1},
                                                        {2, -1},
                                                        {-2, -1}}};
    char w{l[0]}, h{l[1]};

    int32_t tm{0};
    for (const auto [w_m, h_m] : m)
    {
        auto mwp = w + w_m, mhp = h + h_m;
        if ((mwp >= 'a' && mwp <= 'h') && (mhp >= '1' && mhp <= '8'))
        {
            ++tm;
        }
    }

    std::cout << tm << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n;
    std::cin >> n;

    while (n--)
    {
        do_test();
    }

    return 0;
}