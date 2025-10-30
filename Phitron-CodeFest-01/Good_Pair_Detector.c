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

    int pair_count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] % 2) != (a[j] % 2))
            {
                pair_count++;
            }
        }
    }

    printf("%d", pair_count);

    return 0;
}

// === THIS SOLUTION DOESN"T PASS ALL TEST CASES 😔 ===