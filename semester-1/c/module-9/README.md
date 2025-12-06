## **Two Pointer Technique**

```c
#include <stdio.h>

int main()
{
    // tacking inputs
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // reverse array
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
    }

    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

```
