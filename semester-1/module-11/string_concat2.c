#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    char c[202];

    for (int i = 0; i < strlen(a); i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < strlen(b); i++)
    {
        c[i + strlen(a)] = b[i];
    }

    printf("%s", c);

    return 0;
}