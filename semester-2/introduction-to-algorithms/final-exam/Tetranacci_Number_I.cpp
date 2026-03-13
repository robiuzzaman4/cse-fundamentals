#include <bits/stdc++.h>
using namespace std;

long long int dp[35];

long long int tn(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (n == 2 || n == 3)
        return n - 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = tn(n - 1) + tn(n - 2) + tn(n - 3) + tn(n - 4);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    cout << tn(n);
    return 0;
}
