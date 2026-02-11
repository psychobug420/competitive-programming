#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#else
#define RUN_WITH_TESTS()
#endif

void do_test_case()
{
    std::string r{};
    std::cin >> r;

    auto u_num = std::count(r.begin(), r.end(), 'u');
    auto s_num = std::count(r.begin(), r.end(), 's');

    if (u_num == 0)
    {
        std::cout << 0 << std::endl;
        return;
    }

    if (s_num == 0)
    {
        std::cout << (u_num / 2) + 1 << std::endl;
        return;
    }

    auto ops_to_complete{0ull};

    if (r.front() != 's')
    {
        ++ops_to_complete;
    }

    if (r.back() != 's')
    {
        ++ops_to_complete;
    }

    auto i{1ull};
    while (i < r.size() - 1)
    {
        auto u_subseq_num{0ull};
        for (size_t j = i; j < r.size() - 1; ++j)
        {
            if (r[j] == 's')
            {
                break;
            }

            ++u_subseq_num;
        }

        i += u_subseq_num;
        ++i;

        if (u_subseq_num > 1)
        {
            ops_to_complete += u_subseq_num / 2;
        }
    }
    

    std::cout << ops_to_complete << std::endl;
}

int main()
{
    RUN_WITH_TESTS()
    
    size_t tests_num{};
    std::cin >> tests_num;

    for (size_t i = 0; i < tests_num; ++i)
    {
        do_test_case();
    }

    return 0;
}