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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long int first_large_idx = 0;
        long long int second_large_idx = 1;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > v[first_large_idx])
            {
                second_large_idx = first_large_idx;
                first_large_idx = i;
            }
            else if (v[i] > v[second_large_idx] && v[i] != v[first_large_idx])
            {
                second_large_idx = i;
            }
        }

        if (first_large_idx < second_large_idx)
            cout << first_large_idx << " " << second_large_idx << endl;
        else
            cout << second_large_idx << " " << first_large_idx << endl;
    }

    return 0;
}