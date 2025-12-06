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

    // print specific row
    // int row_index;
    // scanf("%d", &row_index);
    // for (int i = 0; i < r; i++)
    // {
    //     {
    //         printf("%d ", a[row_index][i]);
    //     }
    // }
    
    // print specific col
    int col_index;
    scanf("%d", &col_index);
    for (int i = 0; i < c; i++)
    {
        {
            printf("%d ", a[i][col_index]);
        }
    }

    return 0;
}
