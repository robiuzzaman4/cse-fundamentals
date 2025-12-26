#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    bool found = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}