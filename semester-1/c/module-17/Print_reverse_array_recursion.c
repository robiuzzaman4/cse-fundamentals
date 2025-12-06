#include <stdio.h>

void printArray(int array[], int size, int index)
{
    if (index == size)
    {
        return;
    }

    printArray(array, size, index + 1);
    printf("%d ", array[index]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printArray(a, n, 0);

    return 0;
}