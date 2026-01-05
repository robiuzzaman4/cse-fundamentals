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

void delete_at_any(Node *&head, int pos)
{
    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    Node *delete_node = temp->next;

    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete delete_node;
}

void delete_at_any_gemeni(Node *&head, int pos)
{
    if (head == NULL)
        return; // List is empty

    Node *temp = head;

    // Case 1: Deleting the Head
    if (pos == 0)
    {
        head = temp->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        delete temp;
        return;
    }

    // Traverse to the node at the specific position
    for (int i = 0; temp != NULL && i < pos; i++)
    {
        temp = temp->next;
    }

    // If position is out of bounds
    if (temp == NULL)
        return;

    // Case 2: Deleting the Tail
    if (temp->next == NULL)
    {
        temp->prev->next = NULL;
    }
    // Case 3: Deleting a Middle Node
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }

    delete temp;
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

    delete_at_any(head, 2);
    print_forword(head);

    return 0;
}