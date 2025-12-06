#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int result = strcmp(a, b);
    printf("%d", result);

    // if a < b result = -1;
    // if a > b result = 1;
    // if a == b result = 0;

    return 0;
}