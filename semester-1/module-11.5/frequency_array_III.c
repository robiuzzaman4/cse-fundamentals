#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[6] = {0};
    for (int i = 0; i < n; i++)
    {
        fre[a[i]]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d -> %d\n", i, fre[i]);
    }

    return 0;
}

/**
 * input:
 *      10
 *      1 2 0 2 0 3 1 2 5 0
 */
