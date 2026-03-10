#include <bits/stdc++.h>
using namespace std;

long long int dp[1005];

// fibonacci top down
long long int fibo(long long int n)
{
    if (n == 0 || n == 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));

    long long int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}

// fibonacci top bottom (recursion) approach 

// fibonacci with memoization or dp array

// dp array used for optimizing recursive call from O(2^N) => O(N)