#include <bits/stdc++.h>

int main()
{
    std::list<double> l{};

    std::string str{};
    while (std::getline(std::cin, str))
    {
        std::istringstream i_s(str);

        double x{};
        while (i_s >> x)
        {
            l.emplace_back(std::sqrt(x));
        }
    }

    for (const auto &el : l | std::ranges::views::reverse)
    {
        std::cout << std::format("{:.4f}", el) << std::endl;
    }

    return 0;
}