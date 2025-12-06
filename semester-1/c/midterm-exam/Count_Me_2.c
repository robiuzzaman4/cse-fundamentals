#include <stdio.h>

int main()
{
    char s[100001];

    scanf("%s", &s);

    int consonants = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i];
        if ((val != 'a') && (val != 'e') && (val != 'i') && (val != 'o') && (val != 'u'))
        {
            consonants++;
        }
    }

    printf("%d", consonants);
    return 0;
}