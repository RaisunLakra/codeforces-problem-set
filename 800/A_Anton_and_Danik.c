#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    char games[n + 1];
    fgets(games, sizeof(games), stdin);

    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (games[i] == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
        printf("Anton\n");
    else if (anton < danik)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}