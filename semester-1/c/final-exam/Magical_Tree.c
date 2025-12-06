#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // top part
    int star_line_count = (n - 1) / 2 + 6;
    int star = 1;
    int space = star_line_count - 1;

    for (int i = 1; i <= star_line_count; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    // bottom part
    int last_line_start_count = star - 2;
    int space_indent = (last_line_start_count - n) / 2;

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= space_indent; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= space_indent; k++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}