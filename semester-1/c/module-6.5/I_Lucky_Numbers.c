#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int first_digit = n / 10;
    int last_digit = n % 10;

    int is_lucky = 0;

    if (last_digit == 0)
    {
        is_lucky = 1;
    }
    else
    {
        if (first_digit % last_digit == 0 || last_digit % first_digit == 0)
        {
            is_lucky = 1;
        }
    }

    if (is_lucky)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}