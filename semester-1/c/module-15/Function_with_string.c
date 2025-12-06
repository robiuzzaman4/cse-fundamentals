#include <stdio.h>

void printArrItem(char s[])
{
    printf("%s", s);
}

int main()
{
    char s[10];
    scanf("%s", &s);

    printArrItem(s);
    return 0;
}