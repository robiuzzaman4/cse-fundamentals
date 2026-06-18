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

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            long long current_sum = (long long)a[i].first + a[left].first + a[right].first;

            if (current_sum == x)
            {
                cout << a[i].second << " " << a[left].second << " " << a[right].second << "\n";
                return 0;
            }
            else if (current_sum < x)
                left++;
            else
                right--;
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}
