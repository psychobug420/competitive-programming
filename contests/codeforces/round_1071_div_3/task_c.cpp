#include <bits/stdc++.h>

int main()
{
    std::string num_tests_data;
    std::getline(std::cin, num_tests_data);
    size_t num_tests = std::stoull(num_tests_data);

    for (size_t i = 0; i < num_tests; ++i)
    {
        std::string nums_amount_data;
        std::getline(std::cin, nums_amount_data);
        size_t nums_amount = std::stoull(nums_amount_data);

        std::string nums_data;
        std::getline(std::cin, nums_data);
        std::istringstream nums_data_stream(nums_data);

        std::vector<uint32_t> nums;
        nums.reserve(nums_amount);
        std::string num_data;
        while (std::getline(nums_data_stream, num_data, ' '))
        {
            nums.emplace_back(static_cast<uint32_t>(std::stoi(num_data)));
        }

        std::sort(nums.begin(), nums.end());

        std::cout << std::max(nums[0], nums[1] - nums[0]) << std::endl;
    }

    return 0;
}