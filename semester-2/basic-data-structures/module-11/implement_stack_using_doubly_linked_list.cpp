#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

class St
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;

        sz++;
    }

    void pop()
    {
        Node *delete_node = tail;

        tail = tail->prev;
        delete delete_node;

        if (tail == NULL)
        {
            head = NULL;
            return;
        }

        tail->next = NULL;

        sz--;
    }

    int top()
    {
        return tail->value;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
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
