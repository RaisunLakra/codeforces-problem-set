// problem : Generate Permutation

#include <iostream>
#include <vector>
#include <cstdint>

std::vector<int> solve(int n)
{
    if (n == 1)
        return {1};
    else if (n == 2)
        return {-1};

    std::vector<int> ans(n);
    int k = n;
    for (int i = 0; i < n / 2; i++)
    {
        ans[i] = k--;
    }

    k = 1;
    for (int i = n / 2; i < n; i++)
    {
        ans[i] = k++;
    }

    return ans;
}

int32_t main(int argc, char **argv)
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

        std::vector<int> ans = solve(n);

        for (int i = 0; i < ans.size(); i++)
        {
            std::cout << ans[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}