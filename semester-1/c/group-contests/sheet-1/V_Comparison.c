#include <stdio.h>

int main()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);

    int is_right = 0;

    if (s == '>' && a > b)
    {
        is_right = 1;
    }
    else if (s == '<' && a < b)
    {
        is_right = 1;
    }
    else if (s == '=' && a == b)
    {
        is_right = 1;
    }

    if (is_right > 0)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }

    return 0;
}