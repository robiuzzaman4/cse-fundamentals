#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    char s[a + 1 + b + 1];
    scanf("%s", s);

    if (s[a] != '-')
    {
        printf("No");
        return 0;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        if (i == a)
        {
            continue;
        }
        if (s[i] < '0' || s[i] > '9')
        {
            printf("No");
            return 0;
        }
    }

    printf("Yes");

    return 0;
}