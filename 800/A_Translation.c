#include <stdio.h>
#include <string.h>

int main()
{
    char berland[101], birland[101];
    scanf("%s", berland);
    scanf("%s", birland);

    if (strlen(berland) != strlen(birland))
    {
        printf("NO\n");
        return 0;
    }

    int n = strlen(berland);
    int right = n - 1;

    for (int left = 0; left < n; left++)
    {
        if (berland[left] != birland[right--])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}