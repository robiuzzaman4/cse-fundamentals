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

        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 1; i <= k; i++)
        {
            int src, dest;
            cin >> src >> dest;

            if (mp.find(src) == mp.end() || mp.find(dest) == mp.end())
            {
                cout << "NO\n";
            }
            else
            {
                int starting_station_left_most_idx, ending_station_left_most_idx;
                starting_station_left_most_idx = *mp[src].begin();
                ending_station_left_most_idx = *mp[dest].rbegin();
                if (starting_station_left_most_idx < ending_station_left_most_idx)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }

    return 0;
}