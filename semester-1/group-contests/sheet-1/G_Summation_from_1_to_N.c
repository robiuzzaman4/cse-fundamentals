#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("%lld", sum);

    return 0;
}