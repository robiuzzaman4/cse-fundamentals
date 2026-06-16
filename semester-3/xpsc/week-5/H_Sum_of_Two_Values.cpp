#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, x;
    cin >> n >> x;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int i = 0, j = n - 1;
    while (i < j)
    {
        long long current_sum = a[i].first + a[j].first;

        if (current_sum == x)
        {
            cout << a[i].second << " " << a[j].second << "\n";
            return 0;
        }
        else if (current_sum < x)
            i++;
        else
            j--;
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}