#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> names(n);
    for (int i = 0; i < n; i++)
        cin >> names[i];

    set<string> seen;

    for (int i = n - 1; i >= 0; i--)
    {
        if (seen.find(names[i]) == seen.end())
        {
            cout << names[i] << "\n";
            seen.insert(names[i]);
        }
    }

    return 0;
}