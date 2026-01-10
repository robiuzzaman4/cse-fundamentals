#include <bits/stdc++.h>
using namespace std;

class St
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
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
