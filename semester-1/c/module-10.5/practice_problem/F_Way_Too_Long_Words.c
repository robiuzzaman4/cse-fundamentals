#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[n][101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int len = strlen(a[i]);
        if (len > 10)
        {
            int count = len - 2;
            char first_char = a[i][0];
            char last_char = a[i][len - 1];
            printf("%c%d%c\n", first_char, count, last_char);
        }
        else
        {
            printf("%s\n", a[i]);
        }
    }

    return 0;
}
