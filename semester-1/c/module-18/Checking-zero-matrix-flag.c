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

    // == using flag variable ==
    int isZeroMatrix = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                isZeroMatrix = 0;
                break;
            }
        }
    }

    if (isZeroMatrix > 0)
    {
        printf("Zero Matrix = True");
    }
    else
    {
        printf("Zero Matrix = False");
    }

    return 0;
}