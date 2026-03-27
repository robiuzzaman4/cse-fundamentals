#include <bits/stdc++.h>
using namespace std;

long long int power[125];
long long int dp[125][125][7300];

long long int knapsack(int idx, int k, int w)
{
    if (idx < 0 || k <= 0 || w <= 0)
        return 0;

    if (dp[idx][k][w] != -1)
        return dp[idx][k][w];

    int energy_needed = idx + 1;

    if (w >= energy_needed)
    {
        long long int opt1 = power[idx] + knapsack(idx - 1, k - 1, w - energy_needed);
        long long int opt2 = knapsack(idx - 1, k, w);

        return dp[idx][k][w] = max(opt1, opt2);
    }
    else
    {
        return dp[idx][k][w] = knapsack(idx - 1, k, w);
    }
}

int main()
{

    int n, k, w;
    cin >> n >> k >> w;

    for (int i = 0; i < n; i++)
        cin >> power[i];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int l = 0; l <= w; l++)
                dp[i][j][l] = -1;
        }
    }

    cout << knapsack(n - 1, k, w) << endl;

    return 0;
}