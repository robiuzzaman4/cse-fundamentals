#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l.push_back(val);
    }

    list<int> reversed_list = l;

    reversed_list.reverse();

    if (l == reversed_list)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}