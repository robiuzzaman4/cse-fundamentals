#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        printf("%d ", a[l]);
        l++;

        if (l <= r)
        {
            printf("%d ", a[r]);
            r--;
        }
    }

    return 0;
}