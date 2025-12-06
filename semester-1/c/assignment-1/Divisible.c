#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    if (N % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

// PROBLEM LINK: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/divisible-4