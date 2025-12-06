#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

// PROBLEM LINK: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/divisible-2-1-1