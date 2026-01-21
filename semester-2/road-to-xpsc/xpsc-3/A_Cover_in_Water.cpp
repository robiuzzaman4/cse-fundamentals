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
        string s;
        cin >> s;

        int consecutive = 0;
        int dot = 0;
        for (char c : s)
        {
            if (c == '.')
            {
                consecutive++;
                if (consecutive == 3)
                    break;
            }
            else
            {
                consecutive = 0;
            }

            if (c != '#')
            {
                dot++;
            }
        }

        if (consecutive == 3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << dot << endl;
        }
    }

    return 0;
}