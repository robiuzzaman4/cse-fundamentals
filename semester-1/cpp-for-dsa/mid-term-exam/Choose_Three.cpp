#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n, sum;
        cin >> n >> sum;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        bool found = false;

        for (int i = 0; i <= n - 3; i++)
        {
            int remaining_target = sum - a[i];

            int l = i + 1;
            int r = n - 1;

            while (l < r)
            {
                int current_sum = a[l] + a[r];

                if (current_sum == remaining_target)
                {
                    found = true;
                    break;
                }
                else if (current_sum < remaining_target)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}