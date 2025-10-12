#include <stdio.h>

int main()
{
    float r;
    float PI = 3.141592653;

    scanf("%f", &r);

    float area = PI * r * r;

    printf("%.9f", area);

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E