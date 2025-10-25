#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int code_len = a + b + 1 + 1;
    char s[code_len];

    scanf("%s", &s);

    printf("%d %d\n", a, b);
    printf("%s\n", s);

    return 0;
}