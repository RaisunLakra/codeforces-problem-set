#include <stdio.h>
#include <stdint.h>
#include <string.h>

int32_t main(int argc, char const *argv[])
{
    char s[101];
    scanf("%s", s);

    int l = strlen(s);

    int freq[3] = {0};

    for (int i = 0; i < l; i += 2)
    {
        freq[s[i] - '1']++;
    }

    char ans[101];
    int idx = 0;

    for (int i = 0; i < 3; i++)
    {
        while (freq[i]--)
        {
            ans[idx++] = '1' + i;
            ans[idx++] = '+';
        }
    }

    ans[idx - 1] = '\0';

    printf("%s\n", ans);

    return 0;
}
