#include <stdio.h>

void printNToOne(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d", n);
    if (n > 1)
    {
        printf(" ");
    }
    printNToOne(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printNToOne(n);
    return 0;
}

// #include <stdio.h>

// void printNToOne(int start, int n)
// {
//     if (start == n + 1)
//     {
//         return;
//     }

//     printNToOne(start + 1, n);
//     printf("%d", start);
//     if (n != 1)
//     {
//         printf(" ");
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     printNToOne(1, n);
//     return 0;
// }