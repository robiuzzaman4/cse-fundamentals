#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            int left_item = 0;
            int right_item = 0;

            for (int j = 0; j < i; j++)
            {
                if (v[j] < v[i])
                {
                    left_item++;
                }
            }
            for (int k = i + 1; k < n; k++)
            {
                if (v[k] > v[i])
                {
                    right_item++;
                }
            }

            if (left_item == right_item)
            {
                cnt++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}