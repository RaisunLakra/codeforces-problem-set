#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    std::cout << (v[1] - v[0]) + (v[2] - v[1]) << std::endl;

    return 0;
}
