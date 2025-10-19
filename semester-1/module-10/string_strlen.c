#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];

    scanf("%s", &s);

    // get the length of a string by using built-in 'strlen()' func with '<string.h>' header
    int len = strlen(s);
    printf("%d", len);

    return 0;
}