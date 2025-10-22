#include <stdio.h>
#include <string.h>

int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);

    int result = strcmp(x, y);

    if (result < 0)
    {
        printf("%s", x);
    }
    else if (result == 0)
    {
        printf("%s", x);
    }

    return 0;
}