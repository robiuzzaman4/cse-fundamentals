#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j--)
        {
            scanf("%d", &x);
            printf("%d\n ", j);
        }
    }

    return 0;
}