#include <bits/stdc++.h>

int main()
{
    size_t num_tests{};
    {
        std::string num_tests_data;
        std::getline(std::cin, num_tests_data);
        num_tests = std::stoull(num_tests_data);
    }

    for (size_t i = 0; i < num_tests; ++i)
    {
        int64_t districts_num{};
        int64_t a_party_voters{}, b_party_voters{};
        std::vector<bool> desired_vote_results;
        std::vector<int64_t> min_voters_per_districts;
        {
            std::string test_data;
            std::getline(std::cin, test_data);
            std::istringstream test_data_stream(test_data);

            std::string districts_num_data;
            std::getline(test_data_stream, districts_num_data, ' ');
            districts_num = std::stoul(districts_num_data);

            std::string a_party_voters_data;
            std::getline(test_data_stream, a_party_voters_data, ' ');
            a_party_voters = std::stoi(a_party_voters_data);

            std::string b_party_voters_data;
            std::getline(test_data_stream, b_party_voters_data, ' ');
            b_party_voters = std::stoi(b_party_voters_data);

            std::string desired_vote_results_data;
            std::getline(std::cin, desired_vote_results_data);
            desired_vote_results.reserve(districts_num);

            for (const auto &desired_district_vote_result_data : desired_vote_results_data)
            {
                switch (desired_district_vote_result_data)
                {
                case '0':
                {
                    desired_vote_results.emplace_back(false);
                    break;
                }
                case '1':
                {
                    desired_vote_results.emplace_back(true);
                    break;
                }
                default:
                {
                    std::terminate();
                    break;
                }
                }
            }

            std::string min_voters_per_districts_data;
            std::getline(std::cin, min_voters_per_districts_data);
            min_voters_per_districts.reserve(districts_num);
            std::istringstream min_voters_per_districts_data_stream(min_voters_per_districts_data);
            for (size_t i = 0; i < districts_num; ++i)
            {
                std::string min_voters_per_district_data;
                std::getline(min_voters_per_districts_data_stream, min_voters_per_district_data, ' ');

                min_voters_per_districts.emplace_back(std::stoul(min_voters_per_district_data));
            }
        }

        if (std::accumulate(min_voters_per_districts.begin(), min_voters_per_districts.end(), 0ll) > a_party_voters + b_party_voters)
        {
            std::cout << "NO" << std::endl;
            continue;
        }

        int64_t b_need = 0, a_need = 0, a_desired_districts = 0, b_desired_districts = 0;
        for (size_t i = 0; i < districts_num; ++i)
        {
            if (desired_vote_results[i])
            {
                ++b_desired_districts;
                b_need += min_voters_per_districts[i] / 2 + 1;
                continue;
            }

            ++a_desired_districts;
            a_need += min_voters_per_districts[i] / 2 + 1;
        }

        if (a_desired_districts == 0 || b_desired_districts == 0)
        {
            int64_t party_to_dominate_needs = a_need, party_to_dominate_has = a_party_voters, opposition_has = b_party_voters;
            if (a_desired_districts == 0)
            {
                party_to_dominate_has = b_party_voters;
                party_to_dominate_needs = b_need;
                opposition_has = a_party_voters;
            }

            if (party_to_dominate_has < party_to_dominate_needs || party_to_dominate_has < opposition_has + districts_num)
            {
                std::cout << "NO" << std::endl;
            }
            else
            {
                std::cout << "YES" << std::endl;
            }

            continue;
        }

        if (a_party_voters >= a_need && b_party_voters >= b_need)
        {
            std::cout << "YES" << std::endl;
            continue;
        }

        std::cout << "NO" << std::endl;
    }

    return 0;
}