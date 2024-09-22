#pragma GCC optimize("02")

#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%d%d%d", &k, &n, &w);

    int total_cost = k * (w * (w + 1) / 2); // summation formula - summantion of w(i.e total no of banas) * k (cost of one banana)

    int required = total_cost - n;

    if (required < 0)
        printf("0"); // soldier has more money than the total cost
    else
        printf("%d\n", required);

    return 0;
}