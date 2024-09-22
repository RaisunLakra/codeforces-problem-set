#include <iostream>
#include <algorithm>

int main()
{
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slice = c * d;

    int to_make_totalDrink = total_drink / nl;
    int to_make_totalSalt = p / np;

    std::cout << std::min({to_make_totalDrink, to_make_totalSalt, total_slice}) / n;
}