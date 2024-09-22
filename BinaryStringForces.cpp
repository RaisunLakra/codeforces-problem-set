#include <iostream>
#include <string>
#include <vector>

bool checkMaximal(const std::string &value)
{
    int max_one = 0, max_zero = 0;
    int count_one = 0, count_zero = 0;
    bool is_one = value[0] == '1';

    for (char ch : value)
    {
        if (ch == '1')
        {
            if (is_one)
            {
                count_one++;
            }
            else
            {
                max_zero = std::max(max_zero, count_zero);
                count_zero = 0;
                count_one = 1;
                is_one = true;
            }
        }
        else
        {
            if (!is_one)
            {
                count_zero++;
            }
            else
            {
                max_one = std::max(max_one, count_one);
                count_one = 0;
                count_zero = 1;
                is_one = false;
            }
        }
    }

    if (is_one)
    {
        max_one = std::max(max_one, count_one);
    }
    else
    {
        max_zero = std::max(max_zero, count_zero);
    }

    return max_one >= max_zero;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::string binary;
        std::cin >> binary;

        int count = 0;
        // Check all substrings
        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                std::string sub = binary.substr(i, j - i + 1);
                if (checkMaximal(sub))
                    count++;
            }
        }

        std::cout << count << std::endl;
    }

    return 0;
}
