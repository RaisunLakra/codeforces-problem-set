#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int ans = 0;
        ans = n / 4;
        n = n % 4;

        if (n == 2)
            ans = ans + 1;

        printf("%d\n", ans);
    }
}