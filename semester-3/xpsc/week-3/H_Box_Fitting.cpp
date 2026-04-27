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
        int n, w;
        cin >> n >> w;
        multiset<int> ml;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ml.insert(x);
        }

        int height = 1;
        int remaining_width = w;
        while (!ml.empty())
        {
            auto it = ml.upper_bound(remaining_width);

            if (it == ml.begin())
            {
                height++;
                remaining_width = w;
            }
            else
            {
                it--;
                remaining_width -= *it;
                ml.erase(it);
            }
        }

        cout << height << "\n";
    }

    return 0;
}