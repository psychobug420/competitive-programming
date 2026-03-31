#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#endif

int main()
{
#ifdef COMPETITIVE_DEBUG
    RUN_WITH_TESTS()
#else
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
#endif

    size_t n{};
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::array<size_t, 3> arr{{0ull, 0ull, 0ull}};

    while (n--)
    {
        char c{};
        std::cin.get(c);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (c)
        {
        case 'E':
            ++arr[0];
            break;
        case 'L':
            ++arr[1];
            break;
        case 'M':
            ++arr[2];
            break;
        default:
            std::terminate();
        }
    }

    auto max = std::max_element(arr.begin(), arr.end());
    auto idx = std::distance(arr.begin(), max);

    switch (idx)
    {
    case 0:
        std::cout << "Emperor Penguin" << std::endl; 
        break;
    case 1:
        std::cout << "Little Penguin" << std::endl; 
        break;
    case 2:
        std::cout << "Macaroni Penguin" << std::endl; 
        break;
    default:
        std::terminate();
    }

    return 0;
}