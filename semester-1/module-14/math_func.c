#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ceil_ans = ceil(4.5);
    int floor_ans = floor(4.5);
    int round_ans = round(4.6);
    int abs_ans = abs(-10);

    printf("ceil() => %d\n", ceil_ans);
    printf("floor() => %d\n", floor_ans);
    printf("round_ans() => %d\n", round_ans);
    printf("abs() => %d\n", abs_ans);
    return 0;
}