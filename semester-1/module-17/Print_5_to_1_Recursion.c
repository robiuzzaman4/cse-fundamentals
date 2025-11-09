#include <stdio.h>

void printNumber(int i)
{
    if (i == 0)
    {
        return;
    }

    printf("%d\n", i);
    printNumber(i - 1);
}

int main()
{
    int i = 5;

    printNumber(i);

    return 0;
}