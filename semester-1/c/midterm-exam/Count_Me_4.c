#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", &s);

    int freq[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        char ch = s[i];
        int value_of_ch = s[i] - 'a';
        freq[value_of_ch]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
