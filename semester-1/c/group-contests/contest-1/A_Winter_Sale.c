#include <stdio.h>

int main()
{
    float x, p;
    scanf("%f %f", &x, &p);

    float total_paid_parcent = (100 - x) / 100;
    float original_price = p / total_paid_parcent;

    printf("%.2f", original_price);

    return 0;
}