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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insert_at_any(Node *head, int pos, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next->prev = new_node;

    temp->next = new_node;
    new_node->prev = temp;
}

void print_forword(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any(head, 2, 100);
    insert_at_any(head, 3, 200);

    print_forword(head);

    return 0;
}