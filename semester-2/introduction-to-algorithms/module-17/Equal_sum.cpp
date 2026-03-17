#include <bits/stdc++.h>
using namespace std;

int val[1005];
int dp[1005][1005];

bool subset_sum(int idx, int sum) // O(N*S)
{
    if (idx < 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }

    if (dp[idx][sum] != -1)
        return dp[idx][sum];

    if (val[idx] <= sum)
    {
        bool opt1 = subset_sum(idx - 1, sum - val[idx]);
        bool opt2 = subset_sum(idx - 1, sum);
        dp[idx][sum] = opt1 || opt2;
        return dp[idx][sum];
    }
    else
    {
        dp[idx][sum] = subset_sum(idx - 1, sum);
        return dp[idx][sum];
    }
}

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        sum += val[i];
    }

    if (sum % 2 == 1)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                dp[i][j] = -1;
            }
        }

        if (subset_sum(n - 1, sum / 2))
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}