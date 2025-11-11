#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum_primary_diagonal = 0;
    int sum_secondary_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // sum primary diagonal
            if (i == j)
            {
                sum_primary_diagonal += a[i][j];
            }

            // sum secondary diagonal
            if (i + j == n - 1)
            {
                sum_secondary_diagonal += a[i][j];
            }
        }
    }

    int total = abs(sum_primary_diagonal - sum_secondary_diagonal);
    printf("%d", total);

    return 0;
}