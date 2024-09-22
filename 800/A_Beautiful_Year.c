#include <stdio.h>
#include <stdbool.h>

bool is_distinct(int year)
{
    int y = year;
    int frequency[10] = {0};

    while (y)
    {
        if (!frequency[y % 10])
        {
            frequency[y % 10] = 1;
        }
        else
        {
            return false;
        }

        y /= 10;
    }

    return true;
}

int main()
{
    int year;
    scanf("%d", &year);

    while (1)
    {
        year++;
        if (is_distinct(year))
        {
            printf("%d", year);
            break;
        }
    }

    return 0;
}