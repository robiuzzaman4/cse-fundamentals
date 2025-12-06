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

    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            c0++;
        }
        else if (a[i] == 1)
        {
            c1++;
        }
        else if (a[i] == 2)
        {
            c2++;
        }
        else if (a[i] == 3)
        {
            c3++;
        }
        else if (a[i] == 4)
        {
            c4++;
        }
        else if (a[i] == 5)
        {
            c5++;
        }
    }

    printf("%d -> %d\n", 0, c0);
    printf("%d -> %d\n", 1, c1);
    printf("%d -> %d\n", 2, c2);
    printf("%d -> %d\n", 3, c3);
    printf("%d -> %d\n", 4, c4);
    printf("%d -> %d\n", 5, c5);

    return 0;
}

/**
 * input:
 *      10
 *      1 2 0 2 0 3 1 2 5 0
 */