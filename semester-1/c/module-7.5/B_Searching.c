#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];

    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
            break;
        }
        // printf("Index - %d || Arr[i] - %d || X - %d\n", i, arr[i], x);
    }

    printf("%d", idx);

    return 0;
}