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

    vector<long long int> v_odd;
    vector<long long int> v_even;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            v_even.push_back(v[i]);
        }
        else
        {
            v_odd.push_back(v[i]);
        }
    }

    vector<long long int> result_arr = v_even;

    for (int i = 0; i < v_odd.size(); i++)
    {
        result_arr.push_back(v_odd[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << result_arr[i] << " ";
    }

    return 0;
}