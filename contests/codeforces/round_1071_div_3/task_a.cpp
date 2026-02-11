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

    for(size_t i = 0; i < num_tests; ++i)
    {
        std::string test_data;
        std::getline(std::cin, test_data);
        std::istringstream test_data_stream(test_data);

        std::string k_data;
        std::getline(test_data_stream, k_data, ' ');
        uint8_t k = static_cast<uint8_t>(std::stoi(k_data));

        
        std::string x_data;
        std::getline(test_data_stream, x_data, ' ');
        uint8_t x = static_cast<uint8_t>(std::stoi(x_data));

        std::cout << x * k + 1 << std::endl;
    }

    return 0;
}