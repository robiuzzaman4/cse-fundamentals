#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count_ones = 0;
        for (int i = 0; i < n; ++i)
        {
            int h;
            cin >> h;
            if (h == 1)
            {
                count_ones++;
            }
        }

        int casts_for_ones = (count_ones + 1) / 2;

        int remaining_monsters = n - count_ones;

        cout << casts_for_ones + remaining_monsters << endl;
    }
    return 0;
}
