#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int symble = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= symble; k++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");

        symble += 2;
        space--;
    }

    symble = 2 * n - 3;
    space = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= symble; k++)
        {
            if ((n + i) % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");

        symble -= 2;
        space++;
    }

    return 0;
}
