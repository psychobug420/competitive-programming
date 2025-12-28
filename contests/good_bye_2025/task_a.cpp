#include <bits/stdc++.h>

void do_test_case()
{
    std::string yes_and_no{};
    std::cin >> yes_and_no;

    auto y_num = std::count(yes_and_no.begin(), yes_and_no.end(), 'Y');
    auto n_num = std::count(yes_and_no.begin(), yes_and_no.end(), 'N');

    if (y_num > 1)
    {
        std::cout << "NO" << std::endl;
        return;
    }

    std::cout << "YES" << std::endl;
}

int main()
{
    size_t tests_num{};
    std::cin >> tests_num;

    for (size_t i = 0; i < tests_num; ++i)
    {
        do_test_case();
    }

    return 0;
}