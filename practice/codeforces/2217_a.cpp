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
    size_t t{};
    std::cin >> t;
    
    while(t--)
    {
        uint32_t n{}, k{};
        std::cin >> n >> k;

        auto s{0u};
        for(auto i{0u}; i < n; ++i)
        {
            uint32_t a_i{};
            std::cin >> a_i;
            
            s += a_i;
        }

        if ((n * k) % 2 == 0)
        {
            std::cout << "YES\n";
            continue;
        }
        
        if (s % 2 != 0)
        {
            std::cout << "YES\n";
            continue;
        }
        
        std::cout << "NO\n";
    }
    
    std::cout.flush();

    return 0;
}