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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<int> seen;
        int pos = n;

        for (int i = n - 1; i >= 0; i--)
        {
            if (seen.count(a[i]))
            {
                pos = i + 1;
                break;
            }
            seen.insert(a[i]);
            if (i == 0)
                pos = 0;
        }

        cout << pos << endl;
    }

    return 0;
}