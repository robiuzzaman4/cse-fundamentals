#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int wear_count = 0;
        bool is_wearing = false;

        for (int i = 0; i < n; i++)
        {
            int temp = a[i];
            if (temp < x)
            {
                if (!is_wearing)
                {
                    wear_count++;
                    is_wearing = true;
                }
            }
            else if (temp > y)
            {
                is_wearing = false;
            }
        }
        cout << wear_count << endl;
    }

    return 0;
}