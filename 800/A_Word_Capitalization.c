#include <stdio.h>
#include <string.h>
#include <stdint.h>

int32_t main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);

    if (s[0] && s[0] >= 'a' && s[0] <= 'z')
        s[0] = 'A' + s[0] - 'a';

    printf("%s\n", s);
}