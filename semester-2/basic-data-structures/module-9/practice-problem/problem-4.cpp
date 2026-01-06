#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> &l)
{
    // Print Left to Right
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << (next(it) == l.end() ? "" : " ");
    }
    cout << endl;

    // Print Right to Left using Reverse Iterators
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << (next(it) == l.rend() ? "" : " ");
    }
    cout << endl;
}

int main()
{
    list<int> l;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x > l.size())
        {
            cout << "Invalid" << endl;
        }
        else
        {
            auto it = l.begin();
            advance(it, x);

            l.insert(it, v);

            print_list(l);
        }
    }

    return 0;
}