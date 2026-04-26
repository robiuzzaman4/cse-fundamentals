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
        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int l = 1, r = n;
        int current_min = 1;
        int current_max = n;

        while (l <= r)
        {
            if (a[l] == current_min)
            {
                l++;
                current_min++;
            }
            else if (a[l] == current_max)
            {
                l++;
                current_max--;
            }
            else if (a[r] == current_min)
            {
                r--;
                current_min++;
            }
            else if (a[r] == current_max)
            {
                r--;
                current_max--;
            }
            else
            {
                break;
            }
        }

        if (l < r)
        {
            cout << l << " " << r << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}