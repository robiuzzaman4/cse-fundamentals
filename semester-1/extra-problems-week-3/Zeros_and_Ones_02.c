#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    int xth_idx = x - 1;

    for (int i = 1; i <= n; i++)
    {
        if (a[xth_idx] == 0)
        {
            a[xth_idx] = 1;
            break;
        }
        else if (a[xth_idx] == 1)
        {
            a[xth_idx] = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}