#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int s = INT_MIN;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int switch_count = 0;
        char gun = 'c';

        for (int i = 0; i < n; i++)
        {
            if (a[i] > d && gun == 'c')
            {
                gun = 'l';
                switch_count++;
            }
            else if (a[i] <= d && gun == 'l')
            {
                gun = 'c';
                switch_count++;
            }
        }

        cout << switch_count << endl;
    }
}
