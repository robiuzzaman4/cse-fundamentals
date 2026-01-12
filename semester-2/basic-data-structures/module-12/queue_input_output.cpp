#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;

        sz++;
    }

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;

        delete deleteNode;

        if (head == NULL)
        {
            tail == NULL;
        }

        sz--;
    }

    int front()
    {
        return head->value;
    }

    int back()
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

    MyQueue q;

    int n;
    while (cin >> n)
    {
        q.push(n);
    }

    cout << q.front() << " " << q.back() << " " << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}