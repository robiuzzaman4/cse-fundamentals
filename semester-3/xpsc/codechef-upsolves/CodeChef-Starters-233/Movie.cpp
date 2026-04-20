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
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;

        int limit = min(n, m);
        int cost = (c * limit) + (a * (n - limit)) + (b * (m - limit));
        cout << cost << "\n";
    }

    return 0;
}