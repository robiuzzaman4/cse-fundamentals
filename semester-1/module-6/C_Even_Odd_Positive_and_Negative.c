#include <stdio.h>

int main()
{
    int n;
    int x;
    int
        even = 0,
        odd = 0,
        pos = 0,
        neg = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        // check even, odd
        if (x % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }

        // check positive, negative
        if (x > 0)
        {
            pos += 1;
        }
        else if (x < 0)
        {
            neg += 1;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C