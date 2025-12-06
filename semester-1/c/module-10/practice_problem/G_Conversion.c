#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", &s);

    char target = ',';
    char replacement = ' ';

    for (int i = 0; i < strlen(s); i++)
    {
        // if found any ',' then replace it with ' '
        if (s[i] == target)
        {
            s[i] = replacement;
        }

        // if s[i] is lower then make it upper. else if s[i] is upper then make it lower.
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }

        printf("%c", s[i]);
    }

    return 0;
}