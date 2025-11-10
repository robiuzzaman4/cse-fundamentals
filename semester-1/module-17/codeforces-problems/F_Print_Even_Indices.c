#include <stdio.h>

void printEvenIndices(int arr[], int size, int index)
{

    if (index == size)
    {
        return;
    }

    printEvenIndices(arr, size, index + 1);
    if (index % 2 == 0)
    {
        printf("%d ", arr[index]);
    }
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

    printEvenIndices(a, n, 0);

    return 0;
}


// step - 1: find even indexes value
// step - 2: print in reverse order