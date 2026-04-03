#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    int mx_coins = 0;
    if (a == b)
        mx_coins = (mx * 2);
    else
        mx_coins = (mx * 2) - 1;
    cout << mx_coins;
    return 0;
}