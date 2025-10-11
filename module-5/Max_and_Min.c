#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int min, max;

    // find min
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else if (c < a && c < b)
    {
        min = c;
    }

    // find max
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else if (c > a && c > b)
    {
        max = c;
    }

    printf("%d %d", min, max);

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K