#include <stdio.h>

int main()
{
    // tacking input
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // initialize min, max - number and index
    int minNumber = a[0];
    int maxNumber = a[0];

    int minIndex = 0;
    int maxIndex = 0;

    // find minNumber, maxNumber, minIndex, maxIndex
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxNumber)
        {
            maxNumber = a[i];
            maxIndex = i;
        }
        else if (a[i] < minNumber)
        {
            minNumber = a[i];
            minIndex = i;
        }
    }

    /**
     * swaping:
     * [minNumber(minIndex) - maxNumber(maxIndex)]
     * [maxNumber(maxIndex) - minNumber(minIndex)]
     */

    /*
     * eg arr: 4 1 3 10 8
     * min: 1
     * max: 10
     */

    int tmp = a[minIndex];     // 1
    a[minIndex] = a[maxIndex]; // 1 = 10
    a[maxIndex] = tmp;         // 10 = 1

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}