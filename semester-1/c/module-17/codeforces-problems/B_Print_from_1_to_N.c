#include <stdio.h>

void printNToOne(int start, int n)
{
    if (start == n + 1)
    {
        return;
    }

    printf("%d\n", start);
    printNToOne(start + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    printNToOne(1, n);
    return 0;
}