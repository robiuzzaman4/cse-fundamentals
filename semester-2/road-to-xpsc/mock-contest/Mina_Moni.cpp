#include <bits/stdc++.h>
using namespace std;

int val[20];
int dp[20][1005][20];

bool subset_sum(int idx, int sum, int cnt)
{
    if (cnt == 0)
        return sum == 0;

    if (idx < 0)
        return false;

    if (dp[idx][sum][cnt] != -1)
        return dp[idx][sum][cnt];

    bool opt1 = false;
    if (val[idx] <= sum)
    {
        opt1 = subset_sum(idx - 1, sum - val[idx], cnt - 1);
    }

    bool opt2 = subset_sum(idx - 1, sum, cnt);

    return dp[idx][sum][cnt] = opt1 || opt2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
            total_sum += val[i];
        }

        memset(dp, -1, sizeof(dp));

        int target_count = n / 2;
        int min_diff = INT_MAX;

        for (int s = 0; s <= total_sum; s++)
        {
            if (subset_sum(n - 1, s, target_count))
            {
                int mina_sum = s;
                int moni_sum = total_sum - s;
                min_diff = min(min_diff, abs(mina_sum - moni_sum));
            }
        }
        cout << min_diff << endl;
    }
    return 0;
}