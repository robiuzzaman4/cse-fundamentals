#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        long long int factorial = 1;
        for (int j = 1; j <= n; j++)
        {
            factorial *= j;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G