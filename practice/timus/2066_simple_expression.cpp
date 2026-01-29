#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t a{}, b{}, c{};
    std::cin >> a >> b >> c;
    
    std::array<int32_t, 3> arr{{a, b, c}};
    std::sort(arr.begin(), arr.end());

    int32_t r{arr[0]};
    if (arr[1] <= 1) 
    {
        r -= arr[1] + arr[2];
    }
    else
    {
        r -= arr[1] * arr[2];
    }

    std::cout << r << std::endl;
 
    return 0;
}