#include <bits/stdc++.h>
using namespace std;

vector<int> getRunningSum(const vector<int> &v)
{
    int n = v.size();
    vector<int> res(n);
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += v[i];
        res[i] = currentSum;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> runningSum = getRunningSum(v);

    for (int i = 0; i < n; i++)
    {
        cout << runningSum[i] << " ";
    }

    return 0;
}