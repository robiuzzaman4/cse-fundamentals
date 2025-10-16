#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int lowest_value = A[0];
    int lowest_index = 1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < lowest_value)
        {
            lowest_value = A[i];
            lowest_index = i + 1;
        }
    }

    printf("%d %d", lowest_value, lowest_index);

    return 0;
}