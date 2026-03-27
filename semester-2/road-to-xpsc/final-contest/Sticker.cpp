#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<long long int, long long int> stickers_sum;

    for (int i = 1; i <= n; i++)
    {
        long long int type;
        cin >> type;
        stickers_sum[type] += i;
    }

    for (auto s : stickers_sum)
        cout << s.first << " " << s.second << "\n";

    return 0;
}