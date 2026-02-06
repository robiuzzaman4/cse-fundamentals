#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> evens, odds;
    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        if (val % 2 == 0)
            evens.push_back(val);
        else
            odds.push_back(val);
    }

    // Sort both to get the largest at the end
    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());

    long long maxSum = -1;

    // Option 1: Two largest evens
    if (evens.size() >= 2)
    {
        maxSum = max(maxSum, evens[evens.size() - 1] + evens[evens.size() - 2]);
    }

    // Option 2: Two largest odds
    if (odds.size() >= 2)
    {
        maxSum = max(maxSum, odds[odds.size() - 1] + odds[odds.size() - 2]);
    }

    cout << maxSum << endl;

    return 0;
}