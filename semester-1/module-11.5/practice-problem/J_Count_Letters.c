#include <stdio.h>
#include <string.h>

int main()
{
    static char s[10000001];
    scanf("%s", &s);

    int freq[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        char ch = s[i];
        int index_of_ch = ch - 'a';
        freq[index_of_ch]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}