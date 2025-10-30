#include <stdio.h>

int main()
{
    int n, number;
    scanf("%d", &n);
    scanf("%d", &number);

    if (number % 3 == 0)
    {
        printf("%d", number);
    }

    // printf("%d\n", n);

    return 0;
}