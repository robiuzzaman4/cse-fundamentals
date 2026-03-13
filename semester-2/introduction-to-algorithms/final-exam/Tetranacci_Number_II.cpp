#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int tn[n + 1];
    tn[0] = 0;
    tn[1] = 1;
    tn[2] = 1;
    tn[3] = 2;

    for (int i = 4; i <= n; i++)
        tn[i] = tn[i - 1] + tn[i - 2] + tn[i - 3] + tn[i - 4];

    cout << tn[n];

    return 0;
}
