#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    int n;
    while (cin >> n)
    {
        st.push(n);
    }

    if (!st.empty())
    {
        st.pop();
    }

    if (!st.empty())
    {
        cout << st.top() << endl;
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}