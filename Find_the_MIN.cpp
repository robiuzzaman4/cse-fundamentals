#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;

    int q;
    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if (type == 2)
        {
            if (s.empty())
                cout << "empty\n";
            else
            {
                int min_val = *s.begin();
                cout << min_val << "\n";
                s.erase(s.begin());
            }
        }
    }

    return 0;
}
