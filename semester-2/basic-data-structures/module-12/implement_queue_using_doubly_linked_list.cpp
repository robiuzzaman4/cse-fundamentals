#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) // O(1)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

        sz++;
    }

    void pop() // O(1)
    {
        Node *deleteNode = head;
        head = head->next;

        delete deleteNode;

        if (head == NULL)
        {
            tail == NULL;
        }

        head->prev = NULL;

        sz--;
    }

    int front() // O(1)
    {
        return head->value;
    }

    int back() // O(1)
    {
        return tail->value;
    }

    int size() // O(1)
    {
        return sz;
    }

    bool empty() // O(1)
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