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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int white_count = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                white_count++;
        }

        int min_recolor = white_count;

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
                white_count++;
            if (s[i - k] == 'W')
                white_count--;

            min_recolor = min(min_recolor, white_count);
        }

        cout << min_recolor << "\n";
    }

    return 0;
}