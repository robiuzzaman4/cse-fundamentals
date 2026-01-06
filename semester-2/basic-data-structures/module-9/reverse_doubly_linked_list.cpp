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

void instert_at_tail(Node *&head, Node *&tail, int val)
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
}

void reverse_doubly_linked_list(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        swap(i->value, j->value);
    }
}

// void reverse_doubly_linked_list(Node *head, Node *tail)
// {
//     if (head == NULL || head == tail)
//         return;

//     Node *i = head;
//     Node *j = tail;

//     // Continue until pointers meet or cross
//     while (i != j && i->prev != j)
//     {
//         swap(i->value, j->value);
//         i = i->next;
//         j = j->prev;
//     }
// }

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
        instert_at_tail(head, tail, val);
    }

    // print_forword(head);
    reverse_doubly_linked_list(head, tail);
    print_forword(head);

    return 0;
}