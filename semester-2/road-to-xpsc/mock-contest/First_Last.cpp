#include <bits/stdc++.h>
using namespace std;

struct Range
{
    int first;
    int last;
};

int main()
{
    int n;
    cin >> n;

    map<long long int, Range> tracker;

    for (int i = 1; i <= n; i++)
    {
        long long int val;
        cin >> val;

        if (tracker.find(val) == tracker.end())
            tracker[val] = {i, i};
        else
            tracker[val].last = i;
    }

    for (auto item : tracker)
    {
        cout << item.first << " " << item.second.first << " " << item.second.last << "\n";
    }

    return 0;
}