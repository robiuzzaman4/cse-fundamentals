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
        int n, x;
        cin >> n >> x;

        vector<int> w(n);
        long long total_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            total_sum += w[i];
        }

        if (total_sum == x)
        {
            cout << "NO\n";
            continue;
        }

        long long current_sum = 0;

        for (int i = 0; i < n; i++)
        {
            current_sum += w[i];

            if (current_sum == x)
            {
                swap(w[i], w[i + 1]);
                current_sum -= w[i + 1];
                current_sum += w[i];
            }
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << w[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}