#include <stdio.h>

int main()
{
    char s[10];
    scanf("%s", &s);

    printf("full string: %s\n", s);

    // get specific index value
    printf("specific index value: %c\n", s[2]);

    // get null 
    printf("null value: %d\n", s[11]);

    // garbage value
    printf("null value: %d\n", s[15]);

    return 0;
}