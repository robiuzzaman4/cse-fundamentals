#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        long long int time1 = a - 1;
        long long int time2 = abs(b - c) + c - 1;

        if (time1 < time2)
        {
            cout << 1 << endl;
        }
        else if (time1 > time2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
