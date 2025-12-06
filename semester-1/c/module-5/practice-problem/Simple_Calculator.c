#include <stdio.h>

int main()
{
    long long int a, b;

    scanf("%lld %lld", &a, &b);

    long long int summation = a + b;
    long long int multiplication = a * b;
    long long int subtraction = a - b;

    printf("%lld + %lld = %lld\n", a, b, summation);
    printf("%lld * %lld = %lld\n", a, b, multiplication);
    printf("%lld - %lld = %lld\n", a, b, subtraction);

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C