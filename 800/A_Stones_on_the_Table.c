#pragma GCC optimize("02")

#include <stdio.h>
#include <string.h>
#include <stdint.h>

int32_t main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char color[n + 1]; // taking extra space for null terminator
    fgets(color, sizeof(color), stdin);

    int count = 0; // stone required

    for (int i = 1; i < n; i++)
    {
        if (color[i] == color[i - 1])
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}