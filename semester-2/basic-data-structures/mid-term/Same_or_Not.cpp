#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int> q;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }

    bool match = true;

    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            match = false;
            break;
        }

        st.pop();
        q.pop();
    }

    if (match)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}