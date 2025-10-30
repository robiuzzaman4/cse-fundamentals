#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int result[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = a[i] + b[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}