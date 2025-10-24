#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int a[n];
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int x;
    scanf("%lld", &x);

    long long int found_index = -1;

    for (long long int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            found_index = i;
            break;
        }
    }

    printf("%lld", found_index);

    return 0;
}