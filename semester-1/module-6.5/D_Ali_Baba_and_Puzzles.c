#include <stdio.h>

int main()
{
    long long int a, b, c;
    long long d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    /*
        possible arithmetic operations
        1. +, -
        2. +, *
        3. -, +
        4. -, *
        5. *, +
        6. *, -
    */

    if (a + b - c == d)
    {
        printf("YES");
    }
    else if (a + b * c == d)
    {
        printf("YES");
    }
    else if (a - b + c == d)
    {
        printf("YES");
    }
    else if (a - b * c == d)
    {
        printf("YES");
    }
    else if (a * b + c == d)
    {
        printf("YES");
    }
    else if (a * b - c == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}