#include <stdio.h>

int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
        printf("a[%d]\n", arr[i]);
    }

    return 0;
}