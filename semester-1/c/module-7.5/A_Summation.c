#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%lld", &n);

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
    }

    printf("%lld ", llabs(sum));

    return 0;
}