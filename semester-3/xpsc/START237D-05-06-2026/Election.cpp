#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int required = (n / 2) + 1;

    if (k >= required)
        cout << 0;
    else
        cout << required - k;

    return 0;
}