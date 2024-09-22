#include <stdio.h>

int main()
{
    int friends, h; // number of friends and height of fence
    scanf("%d%d", &friends, &h);

    int width = 0; // width of road
    for (int i = 0; i < friends; i++)
    {
        int height;
        scanf("%d", &height);
        if (height > h)
            width += 2;
        else
            width += 1;
    }

    printf("%d", width);

    return 0;
}