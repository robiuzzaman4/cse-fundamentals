#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m)
    {
        printf("NO");
        return 0;
    }

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_primary_diagonal_1 = true;
    bool is_secondary_diagonal_1 = true;
    bool is_rest_cell_0 = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    is_primary_diagonal_1 = false;
                }
            }
            if (i + j == n - 1)
            {
                if (a[i][j] != 1)
                {
                    is_secondary_diagonal_1 = false;
                }
            }

            if (i != j && i + j != n - 1)
            {
                if (a[i][j] != 0)
                {
                    is_rest_cell_0 = false;
                }
            }
        }
    }

    if (is_primary_diagonal_1 && is_secondary_diagonal_1 && is_rest_cell_0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}