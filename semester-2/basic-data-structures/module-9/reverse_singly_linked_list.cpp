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

void delete_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);

    newNode->next = head;

    head = newNode;
}

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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void reversed_linked_list(Node *&head, Node *&tail, Node *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }

    reversed_linked_list(head, tail, temp->next);

    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    reversed_linked_list(head, tail, head);
    print_linked_list(head);

    return 0;
}