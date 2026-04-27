#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

        ll cnt[12][12] = {0};
        ll first[12] = {0};
        ll second[12] = {0};

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int x = s[0] - 'a';
            int y = s[1] - 'a';

            ans += (first[x] - cnt[x][y]);
            ans += (second[y] - cnt[x][y]);

            first[x]++;
            second[y]++;
            cnt[x][y]++;
        }

        cout << ans << "\n";
    }

    return 0;
}