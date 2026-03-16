#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int idx, int sum, vector<int> &val)
{
    int opt1 = subset_sum(idx-1, val[idx], val);
    int opt2 = subset_sum(idx-1, sum, val);
}

int main()
{
    int n;
    cin >> n;
    vector<int> val(n);

    for (int i = 0; i < n; i++)
        cin >> val[i];
    int sum;
    cin >> sum;

    cout << subset_sum(n - 1, sum, val);

    return 0;
}