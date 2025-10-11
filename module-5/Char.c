#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
    {
        ch = ch + 32;
        printf("%c", ch);
    }

    return 0;
}

// PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N