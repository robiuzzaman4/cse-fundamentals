#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int om_current_streak = 0;
        int om_max_streak = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                om_current_streak++;
            }
            else
            {
                om_max_streak = max(om_max_streak, om_current_streak);
                om_current_streak = 0;
            }
        }
        om_max_streak = max(om_max_streak, om_current_streak);

        int addy_current_streak = 0;
        int addy_max_streak = 0;

        for (int i = 0; i < n; i++)
        {
            if (b[i] > 0)
            {
                addy_current_streak++;
            }
            else
            {
                addy_max_streak = max(addy_max_streak, addy_current_streak);
                addy_current_streak = 0;
            }
        }
        addy_max_streak = max(addy_max_streak, addy_current_streak);

        if (om_max_streak > addy_max_streak)
        {
            cout << "Om\n";
        }
        else if (addy_max_streak > om_max_streak)
        {
            cout << "Addy\n";
        }
        else
        {
            cout << "Draw\n";
        }
    }
    return 0;
}