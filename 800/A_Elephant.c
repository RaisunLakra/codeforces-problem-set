#pragma GCC optimize("02")

#include <stdio.h>
#include <stdint.h>

int32_t main()
{
    int n;
    scanf("%d", &n);

    int ans = n / 5 + (n % 5 == 0 ? 0 : 1);

    printf("%d\n", ans);

    return 0;
}