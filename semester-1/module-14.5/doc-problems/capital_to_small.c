#include <stdio.h>

char capital_to_small(char ch)
{
    char small = ch + 32;
    return small;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    char small = capital_to_small(ch);
    printf("small value of %c = %c", ch, small);

    return 0;
}