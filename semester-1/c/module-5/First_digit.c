#include <stdio.h>

int main()
{
    int X;

    scanf("%d", &X);

    int first_digit = X / 1000;

    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P