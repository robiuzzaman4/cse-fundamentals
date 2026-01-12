#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        if (!l.empty())
        {
            l.pop_front();
        }
    }

    int front()
    {
        return l.front();
    }

    int back()
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

    MyQueue q;

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