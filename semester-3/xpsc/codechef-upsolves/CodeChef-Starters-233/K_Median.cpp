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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        set<int> st;
        int rem = n - k;
        int left = rem / 2;
        if (rem % 2 == 0)
            left--;
        int right = rem / 2;

        for (int i = 0; i < n; i++)
        {
            int cur_left = i;
            int cur_right = n - i - 1;

            // median
            if (cur_left >= left && cur_right >= right)
                st.insert(a[i]);
        }

        for (auto val : st)
        {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}