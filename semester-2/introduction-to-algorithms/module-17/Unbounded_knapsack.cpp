#include <bits/stdc++.h>
using namespace std;

int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int idx, int mx_weight)
{
    if (idx < 0 || mx_weight <= 0)
        return 0;

    if (dp[idx][mx_weight] != -1)
        return dp[idx][mx_weight];

    if (weight[idx] <= mx_weight)
    {
        int opt1 = knapsack(idx, mx_weight - weight[idx]) + val[idx];
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
    int n, mx_weight;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cin >> mx_weight;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= mx_weight; j++)
            dp[i][j] = -1;
    }

    cout << knapsack(n - 1, mx_weight);

    return 0;
}

