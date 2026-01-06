#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70, 80};
    // list<int> l2;
    // l2 = l;

    l.push_back(100);                                // insert at tail
    l.push_front(400);                               // insert at head
    l.pop_back();                                    // delete at tail
    l.pop_front();                                   // delete at head
    l.insert(next(l.begin(), 2), 100);               // insert at any
    l.erase(next(l.begin(), 3));                     // delete at any
    l.erase(next(l.begin(), 2), next(l.begin(), 5)); // delete at any range

    auto it = find(l.begin(), l.end(), 20);

    if (it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}