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
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (s[0] == 'B' && s[s.length() - 1] == 'B')
        {
            cout << n << "\n";
            continue;
        }

        bool seen = false;
        int first_b_idx = 0;
        int last_b_idx = n - 1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && !seen)
            {
                first_b_idx = i;
                seen = true;
            }

            if (s[i] == 'B' && seen)
            {
                last_b_idx = i;
            }
        }

        int ans = (last_b_idx - first_b_idx) + 1;
        cout << ans << "\n";
    }
    
    return 0;
}

// W-0 B-1 B-2 W-3 B-4 W-5 = (4 - 1) + 1 = 4
// B-0 W-1 B-2 W-3 W-4 B-5 = (5 - 0) + 1 = 6
// W-0 B-1 W-2 B-3 W-4 W-5 W-6 B-7 W-8 = (7 - 1) + 1 = 7