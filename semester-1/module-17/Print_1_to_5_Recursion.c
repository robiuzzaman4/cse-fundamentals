#include <stdio.h>

void printNumber(int i)
{
    if (i == 6)
    {
        return;
    }

    printf("%d\n", i);
    printNumber(i + 1);
}

int main()
{
    int i = 1;

    printNumber(i);

    return 0;
}