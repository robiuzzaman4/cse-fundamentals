#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = -1;

    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}