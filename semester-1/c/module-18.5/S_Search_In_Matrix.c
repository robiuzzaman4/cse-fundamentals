#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int n;
    scanf("%d", &n);

    bool is_contain = false;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == n)
            {
                is_contain = true;
            }
        }
    }

    if (is_contain)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}