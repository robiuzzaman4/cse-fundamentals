#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> counts;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            counts[a]++;
        }

        long long total_sets = 0;
        int prev_size = -1;
        int prev_count = 0;

        for (auto [size, count] : counts)
        {
            if (size == prev_size + 1)
            {
                if (count > prev_count)
                    total_sets += (count - prev_count);
            }
            else
            {
                total_sets += count;
            }
            prev_size = size;
            prev_count = count;
        }

        cout << total_sets << "\n";
    }
    return 0;
}