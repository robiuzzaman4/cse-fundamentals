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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int final_element = 0;
        int target = n - 1;

        for (int i = 0; i < n; i++)
        {
            if ((target & i) == i)
            {
                final_element ^= a[i];
            }
        }

        cout << final_element << "\n";
    }
    return 0;
}