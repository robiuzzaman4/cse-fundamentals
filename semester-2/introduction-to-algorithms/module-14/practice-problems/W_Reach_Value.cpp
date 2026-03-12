#include <bits/stdc++.h>
using namespace std;

bool can_reach(long long int current, long long int target)
{
    if (current == target)
        return true;
    if (current > target)
        return false;

    return can_reach(current * 10, target) || can_reach(current * 20, target);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        bool reach = can_reach(1, n);
        if (reach)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}