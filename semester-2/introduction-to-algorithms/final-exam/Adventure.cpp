#include <bits/stdc++.h>
using namespace std;

int weights[1005];
int values[1005];
int dp[1005][1005];

int knapsack(int idx, int mx_weight)
{
    if (idx < 0 || mx_weight < 0)
        return 0;

    if (dp[idx][mx_weight] != -1)
        return dp[idx][mx_weight];

    if (weights[idx] <= mx_weight)
    {
        int opt1 = knapsack(idx - 1, mx_weight - weights[idx]) + values[idx];
        int opt2 = knapsack(idx - 1, mx_weight);
        dp[idx][mx_weight] = max(opt1, opt2);
        return dp[idx][mx_weight];
    }
    else
    {
        dp[idx][mx_weight] = knapsack(idx - 1, mx_weight);
        return dp[idx][mx_weight];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        for (int i = 0; i < n; i++)
            cin >> weights[i];

        for (int i = 0; i < n; i++)
            cin >> values[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= w; j++)
            {
                dp[i][j] = -1;
            }
        }

        cout << knapsack(n - 1, w) << endl;
    }

    return 0;
}