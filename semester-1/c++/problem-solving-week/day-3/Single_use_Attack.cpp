#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;

        int min_attacks = 0;

        int attacks_only_normal = (h + x - 1) / x;

        cout << attacks_only_normal << endl;

        int attacks_with_special;

        int remaining_health = h - y;

        if (remaining_health <= 0)
        {
            attacks_with_special = 1;
        }
        else
        {
            int remaining_attacks = (remaining_health + x - 1) / x;
            attacks_with_special = 1 + remaining_attacks;
        }

        min_attacks = min(attacks_only_normal, attacks_with_special);

        cout << min_attacks << endl;
    }

    return 0;
}