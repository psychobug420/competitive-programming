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
        std::string num_floors_data;
        std::getline(std::cin, num_floors_data);
        size_t num_floors = std::stoull(num_floors_data);

        std::string floors_to_travel_data;
        std::getline(std::cin, floors_to_travel_data);
        std::istringstream floors_to_travel_data_stream(floors_to_travel_data);

        std::vector<uint8_t> floors_to_travel;
        std::string floor_to_travel_data;
        while (std::getline(floors_to_travel_data_stream, floor_to_travel_data, ' '))
        {
            floors_to_travel.emplace_back(static_cast<uint8_t>(std::stoi(floor_to_travel_data)));
        }

        size_t floor_to_remove = 0;
        int reduced_distance = std::abs(floors_to_travel[1] - floors_to_travel[0]);

        if (std::abs(floors_to_travel[floors_to_travel.size() - 1] - floors_to_travel[floors_to_travel.size() - 2]) > reduced_distance)
        {
            floor_to_remove = floors_to_travel.size() - 1;
            reduced_distance = std::abs(floors_to_travel[floors_to_travel.size() - 1] - floors_to_travel[floors_to_travel.size() - 2]);
        }

        for (size_t i = 0, j = 2; j < num_floors; ++i, ++j)
        {
            int possible = std::abs(floors_to_travel[j] - floors_to_travel[i]);
            int current = std::abs(floors_to_travel[i + 1] - floors_to_travel[i]) + std::abs(floors_to_travel[j] - floors_to_travel[i + 1]);

            if (possible >= current)
            {
                continue;
            }

            int possible_distance_to_recude = current - possible;

            if (possible_distance_to_recude > reduced_distance)
            {
                reduced_distance = possible_distance_to_recude;
                floor_to_remove = i + 1;
            }
        }

        floors_to_travel.erase(floors_to_travel.begin() + floor_to_remove);

        size_t total_distance_to_travel = 0;
        for (size_t i = 1; i < floors_to_travel.size(); ++i)
        {
            total_distance_to_travel += std::abs(floors_to_travel[i] - floors_to_travel[i - 1]);
        }

        std::cout << total_distance_to_travel << std::endl;
    }

    return 0;
}