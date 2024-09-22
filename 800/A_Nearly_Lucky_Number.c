#include <stdio.h>
#include <string.h>

int main()
{
    long long number;
    scanf("%lld", &number);

    int count = 0;
    while (number > 0)
    {
        count += (number % 10 == 4 || number % 10 == 7) ? 1 : 0;
        number /= 10;
    }

    if (count == 4 || count == 7)
        printf("YES");
    else
        printf("NO");

    return 0;
}