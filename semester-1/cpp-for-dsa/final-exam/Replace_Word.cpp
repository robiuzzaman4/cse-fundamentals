#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int n = s.size();
        int m = x.size();

        for (int i = 0; i <= n - m;)
        {
            bool match = true;

            for (int j = 0; j < m; j++)
            {
                if (s[i + j] != x[j])
                {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                s.replace(i, m, "#");
                i++;
                n = s.size();
            }
            else
            {
                i++;
            }
        }

        cout << s << endl;
    }

    return 0;
}
