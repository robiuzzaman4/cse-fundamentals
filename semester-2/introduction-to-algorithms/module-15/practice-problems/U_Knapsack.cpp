#include <bits/stdc++.h>
using namespace std;

int v[1005];
int w[55];
int dp[1005][1005];

int knapsack(int idx, int mx_w)
{
    if (idx < 0 || mx_w <= 0)
        return 0;

    if (dp[idx][mx_w] != -1)
        return dp[idx][mx_w];

    if (w[idx] <= mx_w)
    {
        int opt1 = knapsack(idx - 1, mx_w - w[idx]) + v[idx];
        int opt2 = knapsack(idx - 1, mx_w);
        dp[idx][mx_w] = max(opt1, opt2);
        return dp[idx][mx_w];
    }
    else
    {
        dp[idx][mx_w] = knapsack(idx - 1, mx_w);
        return dp[idx][mx_w];
    }
}

int main()
{
    int n, mx_w;
    cin >> n >> mx_w;

    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= mx_w; j++)
            dp[i][j] = -1;
    }

    cout << knapsack(n - 1, mx_w);

    return 0;
}