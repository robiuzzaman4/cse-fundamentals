#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int found_e = 0;
    int found_g = 0;
    int found_y = 0;
    int found_p = 0;
    int found_t = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            found_e++;
        }
        else if (s[i] == 'g' || s[i] == 'G')
        {
            found_g++;
        }
        else if (s[i] == 'y' || s[i] == 'Y')
        {
            found_y++;
        }
        else if (s[i] == 'p' || s[i] == 'P')
        {
            found_p++;
        }
        else if (s[i] == 't' || s[i] == 'T')
        {
            found_t++;
        }
    }

    int posible_word_count = min({found_e, found_g, found_y, found_p, found_t});

    cout << posible_word_count;

    return 0;
}