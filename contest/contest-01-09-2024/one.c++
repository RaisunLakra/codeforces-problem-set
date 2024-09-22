#include <iostream>
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
        int a, b;
        std::cin >> a >> b;

        b /= 2;

        if (b == 0)
        {
            if (a % 2)
            {
                std::cout << "False" << '\n';
            }
        }
        else
        {
            if (a > 2)
            {
                a -= 2;
                if (a % 2)
                {
                    std::cout << "False" << '\n';
                    continue;
                }
            }
        }

        std::cout << "True" << '\n';
    }

    return 0;
}