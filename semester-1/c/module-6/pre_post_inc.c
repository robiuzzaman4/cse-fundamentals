#include <stdio.h>

int main()
{
    // === 1st example ===
    int x = 10;
    int y = x++;
    int z = ++y;
    printf("1st example: %d\n", z++);

    // === 2nd example ===
    int a = 10;
    --a;
    printf("2nd example: %d\n", a--);
    printf("2nd example: %d\n", a);
    
    return 0;
}