#include <stdio.h>

int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    int is_right = 0;
    int expected_output = 0;

    if (s == '+')
    {
        int expected = a + b;
        if (expected == c)
        {
            is_right = 1;
        }
        else
        {
            expected_output = expected;
        }
    }
    else if (s == '-')
    {
        int expected = a - b;
        if (expected == c)
        {
            is_right = 1;
        }
        else
        {
            expected_output = expected;
        }
    }
    else if (s == '*')
    {
        int expected = a * b;
        if (expected == c)
        {
            is_right = 1;
        }
        else
        {
            expected_output = expected;
        }
    }

    if (is_right > 0)
    {
        printf("Yes");
    }
    else
    {
        printf("%d", expected_output);
    }

    return 0;
}