#pragma GCC optimize("02")

#include <stdio.h>
#include <stdint.h>
#include <math.h>

int32_t main(void)
{
    uint32_t a, b;
    scanf("%d%d", &a, &b);

    uint8_t count_years = 0;
    while (a <= b)
    {
        count_years++;
        a *= 3;
        b *= 2;
    }

    printf("%d", count_years);

    return 0;
}