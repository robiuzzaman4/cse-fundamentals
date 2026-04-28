#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        priority_queue<int> pq;
        for (int i = 1; i <= n; i++)
            pq.push(i);

        vector<pair<int, int>> operations;

        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            operations.push_back({a, b});

            int result = (a + b + 1) / 2;
            pq.push(result);
        }

        cout << pq.top() << "\n";
        for (auto p : operations)
            cout << p.first << " " << p.second << "\n";
    }

    return 0;
}