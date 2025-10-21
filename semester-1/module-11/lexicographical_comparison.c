#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int i = 0;

    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("a is smaller than b");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b is smaller than a");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("a is smaller than b");
            break;
        }
        else if (b[i] < a[i])
        {
            printf("b is smaller than a");
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
    }

    return 0;
}