#include <stdio.h>

int main()
{
    int n, m;
    int max = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &m);

        if (m > max)
        {
            max = m;
        }
    }

    printf("%d", max);

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E