#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];

    scanf("%s", &s);

    int sum = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        sum += (s[i] - '0'); // deduct ascii value to get its actual int value
    }

    printf("%d", sum);
    return 0;
}

/**
 * === SIMULATION ===
 * input = 351;
 * output = 9; (3 + 5 + 1 = 9)
 *
 * === CODE ===
 * char s[1000001];                   => making an array of size 10^6 + 1 for NULL value
 *
 * scanf("%s", &s);                   => tacking input using scanf
 *
 * int sum = 0;                       => initialize sum with 0 value
 *
 * for (int i = 0; i< strlen(s); i++) => starting loop from string first index and continue until its lenth
 * {
 *  sum += (s[i] - '0');              => first iteration => (s[i] - '0') == 3(51 ascii) - 0(48 ascii) so 51-48 is equal to 3. same goes for all iteration and add into sum
 * }
 *
 * printf("%d", sum);                 => print the sum
 *
 * return 0;                          => return main func
 *
 */