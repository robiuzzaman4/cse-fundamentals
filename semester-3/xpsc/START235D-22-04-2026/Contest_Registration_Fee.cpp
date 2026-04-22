#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    if (y > x)
        cout << 100;
    else
        cout << 0;

    return 0;
}