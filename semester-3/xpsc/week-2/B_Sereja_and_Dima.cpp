#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int who = 1;
    int s_total = 0;
    int d_total = 0;

    while (!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left, right);
        if (who % 2 != 0)
            s_total += mx;
        else
            d_total += mx;

        if (mx == left)
            dq.pop_front();
        else
            dq.pop_back();

        who++;
    }

    cout << s_total << " " << d_total;

    return 0;
}