#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#else
#define RUN_WITH_TESTS()
#endif

int main()
{
    RUN_WITH_TESTS()

    std::string num_tests_data;
    std::getline(std::cin, num_tests_data);
    size_t num_tests = std::stoull(num_tests_data);

    for (size_t i = 0; i < num_tests; ++i)
    {
        std::string bits_num_data;
        std::getline(std::cin, bits_num_data);
        uint8_t bits_num = static_cast<uint8_t>(std::stoi(bits_num_data));

        uint16_t max_mask = (1u << bits_num) - 1;
        size_t len = (1u << bits_num);

        std::vector<uint16_t> permutation{};
        permutation.reserve(len);
        std::vector<bool> used(len);

        permutation.emplace_back(max_mask);
        used[max_mask] = true;

        for (uint16_t mask = max_mask >> 1; mask; mask = mask >> 1)
        {
            permutation.emplace_back(mask);
            used[mask] = true;

            for (uint16_t complimentory_mask = mask + 1; complimentory_mask < max_mask; ++complimentory_mask)
            {
                if ((mask & complimentory_mask) == mask && !used[complimentory_mask])
                {
                    permutation.emplace_back(complimentory_mask);
                    used[complimentory_mask] = true;
                }
            }
        }

        permutation.emplace_back(0);
        used[0] = true;

        for (uint16_t mask = 1; mask < max_mask; ++mask)
        {
            if (!used[mask])
            {
                permutation.emplace_back(mask);
            }
        }


        for (const auto &mask : permutation)
        {
            std::cout << mask << ' ';
        }

        std::cout << std::endl;
    }

    return 0;
}