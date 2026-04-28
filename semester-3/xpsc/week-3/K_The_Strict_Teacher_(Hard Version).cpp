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
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> teachers(m);
        for (int i = 0; i < m; i++)
            cin >> teachers[i];

        sort(teachers.begin(), teachers.end());

        while (q--)
        {
            int david_pos;
            cin >> david_pos;

            auto it = upper_bound(teachers.begin(), teachers.end(), david_pos);

            if (it == teachers.begin())
                cout << teachers[0] - 1 << "\n";
            else if (it == teachers.end())
                cout << n - teachers[m - 1] << "\n";
            else
            {
                int R = *it;
                int L = *(--it);
                cout << (R - L) / 2 << "\n";
            }
        }
    }
    return 0;
}