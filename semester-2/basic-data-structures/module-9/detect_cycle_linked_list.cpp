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

int main()
{
    Node *head = new Node(100);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node *slow = head;
    Node *fast = head;

    bool hasCycle = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            hasCycle = true;
            break;
        }
    }

    if (hasCycle)
    {
        cout << "Cycle Detected";
    }
    else
    {
        cout << "No Cycle Found";
    }

    return 0;
}