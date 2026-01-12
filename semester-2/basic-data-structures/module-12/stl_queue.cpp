#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    while (cin >> n)
    {
        q.push(n);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}