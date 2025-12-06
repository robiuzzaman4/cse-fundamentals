#include <stdio.h>

int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);

    long long int last_digit_of_first_number = n % 10;
    long long int last_digit_of_second_number = m % 10;

    long long int sum = last_digit_of_first_number + last_digit_of_second_number;

    printf("%lld", sum);

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F