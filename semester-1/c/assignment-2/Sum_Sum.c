#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum_of_positive = 0;
    int sum_of_negative = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum_of_positive += arr[i];
        }
        else
        {
            sum_of_negative += arr[i];
        }
    }
    printf("%d %d", sum_of_positive, sum_of_negative);

    return 0;
}