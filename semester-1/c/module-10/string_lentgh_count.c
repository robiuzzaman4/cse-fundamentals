#include <stdio.h>

int main()
{
    char s[101];

    scanf("%s", &s);

    // initialize length with 0
    int len = 0;

    // === using while loop ===
    int i = 0;
    while (s[i] != '\0')
    {
        len++;
        i++;
    }

    // === using for loop ===
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     len++;
    // }

    printf("%d", len);

    return 0;
}