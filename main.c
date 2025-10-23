#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int new_days = (d * m1) / (m1 + m2);
        int diff = d - new_days;

        printf("%d\n", diff);
    }

    return 0;
}