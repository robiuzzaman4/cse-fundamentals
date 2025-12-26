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

int linked_list_size(Node *head)
{
    int size = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void insert_at_head(Node *&head, Node *&tail, long long int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;

    if (tail == NULL)
    {
        tail = new_node;
    }
}

void insert_at_tail(Node *&head, Node *&tail, long long int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

void delete_at_any(Node *&head, Node *&tail, int idx)
{
    int size = linked_list_size(head);

    if (idx >= size || idx < 0)
    {
        return;
    }

    if (idx == 0)
    {
        Node *delete_node = head;
        head = head->next;
        delete delete_node;
        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }

    Node *delete_node = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL)
    {
        tail = temp;
    }

    delete delete_node;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        long long int v;

        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
            cout << endl;
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
            cout << endl;
        }
        else
        {
            delete_at_any(head, tail, v);
            print_linked_list(head);
            cout << endl;
        }
    }

    return 0;
}
