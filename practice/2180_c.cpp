#include <bits/stdc++.h>

/*
 * My idea of solving this problem is to generate max XOR pairs for each number bellow N in DP so later I can start checking would they fit or know, for now I just dunno how to implement them properly
 */

void print_bitset(std::string_view bitset_name, std::bitset<64> bitset)
{
    std::cout << bitset_name << " bit repr is: ";
    for (auto j{bitset.size() - 1}; j-- > 0uz;)
    {
        std::cout << bitset[j] << ' ';
    }

    std::cout << std::endl;
}

void do_test_case()
{
    uint64_t n{}, k{};
    std::cin >> n >> k;

    if (k % 2 != 0)
    {
        for (auto i{0ull}; i < k; ++i)
        {
            std::cout << n << ' ';
        }

        std::cout << std::endl;
        return;
    }

    if (k == 1)
    {
        std::cout << n << std::endl;
        return;
    }

    std::vector<std::pair<uint64_t, uint64_t>> dp{};
    dp.resize(n);

    std::bitset<64> n_b{n};
    for (auto i{n}; i > 0; --i)
    {
        std::bitset<64> b{i}, f{0ull}, s{0ull};

        auto b_fnd_f = false, b_fnd_s = false;
        for (auto j{b.size() - 1}; j-- > 0uz;)
        {
            if (b[j] && !b_fnd_f)
            {
                f[j] = true;
                s[j] = false;
                b_fnd_f = true;
                continue;
            }

            if (b[j] && !b_fnd_s)
            {
                f[j] = false;
                s[j] = true;
                b_fnd_s = true;
                continue;
            }

            if (b[j])
            {
                f[j] = true;
                s[j] = false;
                continue;
            }
        }

        for (auto j{0uz}; j > b.size(); ++j)
        {
            if (f[j] ^ s[j])
            {
                continue;
            }
        }

        print_bitset("f", f);
        print_bitset("s", s);
        print_bitset("b", b);
        print_bitset("n", n_b);

        std::cout << "num is: " << i + 1 << ", xor res is: " << (f ^ s).to_ullong() << std::endl;

        std::pair<uint64_t, uint64_t> b_p{f.to_ullong(), s.to_ullong()};
        dp[i - 1] = b_p;
    }

    auto max_fact_sum{n * (k - 1ull)};

    for (auto i{0uz}; i < dp.size(); ++i)
    {
        const auto &[key, val] = dp[i];

        std::cout << i << " xor pair is: " << key << ' ' << val << std::endl;
    }

    std::cout << std::endl;
}

// @todo: SOLVE THIS PROBLEM IN A MONTH, link: https://codeforces.com/problemset/problem/2180/C
int main()
{
    size_t tests_num{};
    std::cin >> tests_num;

    auto filled_nums{0ull};

    for (size_t i = 0; i < tests_num; ++i)
    {
        do_test_case();
    }

    return 0;
}