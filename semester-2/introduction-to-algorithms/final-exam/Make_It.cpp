#include <bits/stdc++.h>
using namespace std;

bool can_reach(int curr, int n, vector<int> &dp)
{
    if (curr == n)
        return true;
    if (curr > n)
        return false;

    if (dp[curr] != -1)
        return dp[curr];

    dp[curr] = can_reach(curr + 3, n, dp) || can_reach(curr * 2, n, dp);
    return dp[curr];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> dp(n + 1, -1);

        bool is_reached = can_reach(1, n, dp);

        if (is_reached)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}