#include <stdio.h>

int main()
{
    int total_test_case;
    scanf("%d", &total_test_case);

    for (int i = 1; i <= total_test_case; i++)
    {
        int n;
        scanf("%d", &n);

        while (n != 0)
        {
            printf("%d ", n % 10);
            n /= 10;
        }

        printf("\n");
    }

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q