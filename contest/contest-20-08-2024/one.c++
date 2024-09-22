// #include <iostream>
// #include <cstdint>

// int32_t main(int argc, char **argv)
// {
//     std::ios::sync_with_stdio(0);
//     std::cin.tie(0);
//     std::cout.tie(0);

//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdint>

int32_t main(void)
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        std::unordered_map<int, int> m;
        int mx_freq = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
            m[a[i]]++; // calculating the frequency
            mx_freq = std::max(mx_freq, m[a[i]]);
        }

        std::cout << n - mx_freq << '\n';
    }

    return 0;
}