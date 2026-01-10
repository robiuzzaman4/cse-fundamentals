#include <bits/stdc++.h>
using namespace std;

class St
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    St mySt;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mySt.push(x);
    }

    // print stack
    while (!mySt.empty())
    {
        cout << mySt.top() << endl;
        mySt.pop();
    }
    return 0;
}
