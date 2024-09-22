#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n;
    scanf("%d", &n);

    int in = 0, out = 0;
    int passenger_in_tram = 0;
    int capacity = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &out, &in);
        passenger_in_tram += in - out;
        capacity = max(capacity, passenger_in_tram);
    }

    printf("%d\n", capacity);

    return 0;
}
