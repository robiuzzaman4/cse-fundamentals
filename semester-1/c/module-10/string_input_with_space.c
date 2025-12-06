#include <stdio.h>

int main()
{
    // eg input: ruhan
    char s[50];
    fgets(s, 6, stdin);
    printf("%s", s);
    return 0;
}