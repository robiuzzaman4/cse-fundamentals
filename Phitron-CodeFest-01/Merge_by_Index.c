#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001], s2[1001];
    int start, end;
    scanf("%s %s", &s1, &s2);
    scanf("%d %d", &start, &end);

    int range = end - start + 1;
    char cut_str[range + 1];
    int j = 0;
    for (int i = start; i <= end; i++)
    {
        cut_str[j] = s2[i];
        j++;
    }

    cut_str[j] = '\0';

    printf("%s", strcat(s1, cut_str));
    return 0;
}