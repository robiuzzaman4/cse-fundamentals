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

void delete_at_tail(Node *&head, Node *&tail)
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

    delete_at_tail(head, tail);
    delete_at_tail(head, tail);
    // delete_at_tail(head, tail);
    print_forword(head);

    return 0;
}