#include <stdio.h>

void func(int x)
{
    x = 20;
}

int main()
{
    int x = 10;
    func(x);
    printf("%d\n", x);
    printf("%p\n", &x);
    return 0;
}