#include <bits/stdc++.h>

#ifdef COMPETITIVE_DEBUG
#include "test_runner.h"
#endif

consteval uint64_t fib(uint64_t n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

template<std::size_t... I>
consteval std::array<uint64_t, sizeof...(I)> make_fib_table(std::index_sequence<I...>)
{
    return { fib(I + 1)... };
}

int main()
{
#ifdef COMPETITIVE_DEBUG
    RUN_WITH_TESTS()
#else
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
#endif

    constexpr auto a = make_fib_table(std::make_index_sequence<45>{}); 

    uint64_t n{};
    std::cin >> n; 

    std::cout << a[n - 1] * 2 << std::endl;

    return 0;
}