#include <stdio.h>

char small_to_capital(char ch)
{
    char capital = ch - 32;
    return capital;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    char capital = small_to_capital(ch);
    printf("capital value of %c = %c", ch, capital);

    return 0;
}