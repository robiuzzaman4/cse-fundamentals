#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    long long int a = 0;
    long long int b = 1;
    long long int result = 0;

    if (n <= 1)
    {
        printf("%d", 0);
        return 0;
    }
    if (n == 2)
    {
        printf("%d", 1);
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }

    printf("%lld", result);

    return 0;
}