#pragma GCC optimize("O2")

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

int32_t main(void)
{
    char s[100];
    int i = 0, c;
    while ((c = getchar()) != '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';

    bool visited[26] = {false};

    int n = strlen(s);
    int distinct_alphabet = 0;
    for (i = 0; i < n; i++)
    {
        if (!visited[s[i] - 'a'])
        {
            visited[s[i] - 'a'] = true;
            distinct_alphabet++;
        }
    }

    if (distinct_alphabet % 2)
        printf("IGNORE HIM!"); // male
    else
        printf("CHAT WITH HER!"); // female

    return 0;
}
