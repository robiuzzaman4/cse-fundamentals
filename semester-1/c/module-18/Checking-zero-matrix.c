#include <stdio.h>

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

    int total_value = r * c;
    int total_zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                total_zero++;
            }
        }
    }

    if (total_value == total_zero)
    {
        printf("Zero Matrix = True");
    }
    else
    {
        printf("Zero Matrix = False");
    }

    return 0;
}