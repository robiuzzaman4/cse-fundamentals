#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Part 1: Increasing triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // Part 2: Decreasing triangle (with spaces)
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = i; j < n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
