#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int d;

        long long int multi = a * b * c;

        if (m % multi == 0)
        {
            d = m / multi;
        }
        else
        {
            d = -1;
        }
        printf("%lld\n", d);
    }

    return 0;
}