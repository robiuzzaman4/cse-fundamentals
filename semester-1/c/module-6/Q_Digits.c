#include <stdio.h>

int main()
{
    int total_test_case;
    scanf("%d", &total_test_case);

    for (int i = 1; i <= total_test_case; i++)
    {
        int n;
        scanf("%d", &n);

        // if (n == 0)
        // {
        //     printf("%d", 0);
        // } - alternativly use do while loop

        do
        {
            printf("%d ", n % 10);
            n /= 10;
        } while (n != 0);

        printf("\n");
    }

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q