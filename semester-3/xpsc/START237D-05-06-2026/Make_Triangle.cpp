#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int side[3];
        cin >> side[0] >> side[1] >> side[2];
        sort(side, side + 3);

        int a = side[0];
        int b = side[1];
        int c = side[2];

        if (a + b > c)
            cout << 0 << "\n";
        else
        {
            int moves_needed = (c + 1) - (a + b);
            cout << moves_needed << "\n";
        }
    }

    return 0;
}