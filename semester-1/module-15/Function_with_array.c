#include <stdio.h>

void printArrItem(int a[], int n)
{
    a[0] = 500;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
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

    printArrItem(a, n);
    return 0;
}