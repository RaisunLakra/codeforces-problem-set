#include <iostream>
#include <cmath>
#include <vector>

void solve(int n, int i, std::vector<int> &v)
{
    if (n == 0)
        return;
    solve(n / 10, i + 1, v);
    int p = (n % 10) * std::pow(10, i);
    if (p != 0)
    {
        v.push_back(p);
    }
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> v;

        solve(n, 0, v);
        std::cout << v.size() << std::endl;
        for (int i = 0; i < v.size(); i++)
        {
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
