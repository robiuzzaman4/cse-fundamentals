#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int a[n];

    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int divided_by_2 = 0;
    int divided_by_3 = 0;

    for (long long int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 2 == 0)
        {
            divided_by_2++;
        }
        else if (a[i] % 3 == 0)
        {
            divided_by_3++;
        }
        else if (a[i] % 2 == 0)
        {
            divided_by_2++;
        }
    }
    printf("%d %d", divided_by_2, divided_by_3);

    return 0;
}