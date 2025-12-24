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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void insert_at_any(Node *&head, Node *&tail, int idx, int value)
{
    Node *newNode = new Node(value);

    if (idx == 0)
    {
        newNode->next = head;
        head = newNode;
        if (tail == NULL)
        {
            tail = newNode;
        }
        return;
    }

    Node *temp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    if (newNode->next == NULL)
    {
        tail = newNode;
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int getSize(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insert_at_tail(head, tail, value);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        int size = getSize(head);
        if (idx > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_any(head, tail, idx, val);
            print_linked_list(head);
            cout << endl;
        }
    }

    return 0;
}