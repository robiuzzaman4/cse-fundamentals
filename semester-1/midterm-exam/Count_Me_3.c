#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[10001];
        scanf("%s", &s);

        int capital = 0;
        int small = 0;
        int digits = 0;

        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                capital++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                small++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                digits++;
            }
        }

        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}