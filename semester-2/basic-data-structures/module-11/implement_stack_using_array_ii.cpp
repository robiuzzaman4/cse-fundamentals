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

    mySt.push(10);
    mySt.push(20);
    mySt.push(30);

    if (mySt.empty() == false)
    {
        mySt.pop();
    }

    if (mySt.empty() == false)
    {
        cout << mySt.top() << endl;
    }

    return 0;
}
